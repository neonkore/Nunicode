#include <assert.h>

#include "defines.h"
#include "strcoll.h"
#include "strcoll_internal.h"

#if (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION)

int32_t _compound_weight(int32_t w,
	const char **encoded, const char *limit,
	nu_read_iterator_t read, nu_compound_read_t com,
	const char **tail,
	nu_codepoint_weight_t weight, void *context) {

	const char *tailp = *tail;

	const char *p = *encoded;
	int32_t new_w = w;
	int32_t consumed = 1; /* one character was consumed at the top */

	while (p < limit) {
		uint32_t u = 0;

		const char *np = com(p, limit, read, &u, &tailp);
		new_w = weight(u, &w, context);

		/* after this point, w might hold rollback value
		 * and new_w holds actual weight */

		++consumed;

		if (new_w >= 0) {
			/* if w == 0 or w == 1, then *p or *np is already pointing
			 * to needed place, otherwise re-read encoded in the forward
			 * direction preserving correctness of tail pointer */
			if (w != 0 && w != 1) {
				assert(consumed + w > 1);

				np = *encoded;
				tailp = *tail;

				for (int32_t i = 0; i < consumed - w; ++i) {
					np = com(np, limit, read, 0, &tailp);
				}
				w = 0;
			}

			*encoded = (w == 0 ? np : p);
			*tail = tailp;

			break;
		}

		p = np;
		w = new_w;
	}

	if (new_w < 0) {
		new_w = weight(0, &w, context);
	}

	assert(new_w >= 0);

	return new_w;
}

int _nu_strcoll(const char *lhs, const char *lhs_limit,
	const char *rhs, const char *rhs_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_compound_read_t com1, nu_compound_read_t com2,
	nu_codepoint_weight_t weight, void *context,
	ssize_t *collated_left, ssize_t *collated_right) {

	int cmp = 0;

	const char *lp = lhs, *rp = rhs;
	const char *ltailp = 0, *rtailp = 0;

	uint32_t u1 = 0, u2 = 0;

	while ((lp < lhs_limit && rp < rhs_limit)
		|| (ltailp != 0 && rp < rhs_limit)
		|| (rtailp != 0 && lp < lhs_limit)) {

		lp = com1(lp, lhs_limit, it1, &u1, &ltailp);
		rp = com2(rp, rhs_limit, it2, &u2, &rtailp);

		int32_t w1 = weight(u1, 0, context);
		int32_t w2 = weight(u2, 0, context);

		if (w1 < 0) {
			w1 = _compound_weight(w1, &lp, lhs_limit,
				it1, com1, &ltailp,
				weight, context);
		}

		if (w2 < 0) {
			w2 = _compound_weight(w2, &rp, rhs_limit,
				it2, com2, &rtailp,
				weight, context);
		}

		assert(w1 >= 0);
		assert(w2 >= 0);

		if (w1 < w2) {
			cmp = -1;
			break;
		}
		else if (w1 > w2) {
			cmp = 1;
			break;
		}

		if (u1 == 0 || u2 == 0) {
			break;
		}
	}

	/* collated_left and collated_right should count
	 * number of successfully collated bytes, not taking
	 * into account limits. therefore if cmp != 0,
	 * number of collated bytes is decreased by (at least) 1
	 * and cmp is limits-fixed afterwards */

	if (collated_left != 0) {
		*collated_left = (lp - lhs) - (cmp == 0 ? 0 : 1);
	}

	if (collated_right != 0) {
		*collated_right = (rp - rhs) - (cmp == 0 ? 0 : 1);
	}

	if (cmp == 0) {
		if (rp < rhs_limit && lp >= lhs_limit) {
			cmp = -1;
		}
		else if (lp < lhs_limit && rp >= rhs_limit) {
			cmp = 1;
		}
	}

	return cmp;
}

const char* _nu_strchr(const char *lhs, const char *lhs_limit,
	uint32_t c, nu_read_iterator_t read,
	nu_compound_read_t com,
	nu_casemapping_t casemap, nu_read_iterator_t casemap_read) {

	const char *p = lhs;
	const char *tail = 0;
	uint32_t u = 0;

	const char *rhs = 0;

	if (casemap != 0) {
		rhs = casemap(c);
		if (rhs != 0) {
			rhs = casemap_read(rhs, &c); /* read new lead codepoint */
		}
	}

	while (p < lhs_limit) {
		const char *np = com(p, lhs_limit, read, &u, &tail);

		if (u == 0) {
			break;
		}

		if (u == c) {
			if (rhs == 0) {
				return p;
			}

			/* rhs != 0 */

			const char *rp = rhs;
			uint32_t u2 = 0;

			do {
				rp = casemap_read(rp, &u2);

				if (u2 == 0) {
					return p; /* succ exit point */
				}

				if (np >= lhs_limit) {
					return 0;
				}

				np = com(np, lhs_limit, read, &u, &tail);

				if (u == 0) {
					return 0;
				}

				if (u != u2) {
					break;
				}
			}
			while (u2 != 0);
		}

		p = np;
	}

	return 0;
}

const char* _nu_strrchr(const char *encoded, const char *limit,
	uint32_t c, nu_read_iterator_t read,
	nu_compound_read_t com,
	nu_casemapping_t casemap, nu_read_iterator_t casemap_read) {

	/* there is probably not much sense in finding string end by decoding it
	 * and then reverse read string again to find last character, therefore
	 * this is a sequence of _nu_strchr() in forward direction
	 *
	 * please let me know if i'm wrong */

	const char *p = encoded;
	const char *last = 0;

	while (p < limit) {
		p = _nu_strchr(p, limit, c, read, com, casemap, casemap_read);

		if (p == 0) {
			return last;
		}

		last = p;
		p = read(p, 0); /* skip one character and continue */
	}

	return last;
}

const char* _nu_strstr(const char *haystack, const char *haystack_limit,
	const char *needle, const char *needle_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_compound_read_t com1, nu_compound_read_t com2,
	nu_casemapping_t casemap, nu_read_iterator_t casemap_read,
	nu_codepoint_weight_t weight, void *context) {

	uint32_t n0 = 0;
	if (needle_limit != needle) {
		it2(needle, &n0);
	}

	if (needle_limit == needle || n0 == 0) {
		return haystack;
	}

	ssize_t needle_len = (needle_limit != NU_UNLIMITED
		? (needle_limit - needle)
		: nu_strbytelen(needle, it2));

	const char *h0 = haystack;
	do {
		h0 = _nu_strchr(h0, haystack_limit,
			n0, it1,
			com1,
			casemap, casemap_read);

		if (h0 == 0) {
			break;
		}

		ssize_t collated_left = 0, collated_right = 0;
		_nu_strcoll(h0, haystack_limit, needle, needle_limit,
			it1, it2,
			com1, com2,
			weight, context,
			&collated_left, &collated_right);

		/* it doesn't matter what collate result is
		 * if whole needle was successfully collated */
		if (collated_right >= needle_len) {
			return h0;
		}

		/* skip one character in haystack */
		if (h0 < haystack_limit) {
			h0 = it1(h0, 0);
		}
	}
	while (h0 != 0 && h0 < haystack_limit);

	return 0;
}

#endif /* NU_WITH_Z_COLLATION || NU_WITH_N_COLLATION */
