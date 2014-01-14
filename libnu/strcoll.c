#include <stdint.h>
#include <stdio.h>

#include "defines.h"
#include "ducet.h"
#include "strcoll.h"
#include "casemap.h"

#if (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION)

static const char* casemap_nop(uint32_t codepoint, nu_read_iterator_t *it) {
	(void)(codepoint);
	(void)(it);

	return 0;
}

static inline int _nu_cmp_abort(int state) {
	return (state == -1 || state == 1) ? 1 : 0;
}

static inline int _nu_cmp_undecided(int state) {
	return (state < -1 || state > 1) ? 1 : 0;
}

static inline const char* _nu_casemap_read(const char *encoded, nu_read_iterator_t encoded_read,
	uint32_t *unicode, const char **tail, nu_read_iterator_t *tail_read,
	nu_casemapping_t casemap) {

	/* re-entry with tail != 0 */
	if (*tail != 0) {
		*tail = (*tail_read)(*tail, unicode);

		switch (*unicode) {
		case 0:
			*tail = 0;
			*tail_read = 0;
			break;

		default:
			return encoded;
		}
	}

	const char *p = encoded_read(encoded, unicode);

	if (*unicode == 0 || casemap == 0) {
		return p;
	}

	const char *map = casemap(*unicode, tail_read);
	if (map == 0) {
		return p;
	}

	/* map != 0 */

	*tail = (*tail_read)(map, unicode);

	return p;
}

static const char* _nu_toupper_read(const char *encoded, nu_read_iterator_t encoded_read,
	uint32_t *unicode, const char **tail, nu_read_iterator_t *tail_read) {
	return _nu_casemap_read(encoded, encoded_read, unicode, tail, tail_read, nu_toupper);
}

static const char* _nu_casemapnop_read(const char *encoded, nu_read_iterator_t encoded_read,
	uint32_t *unicode, const char **tail, nu_read_iterator_t *tail_read) {
	(void)(tail);
	(void)(tail_read);

	return encoded_read(encoded, unicode);
}

static int _nu_collate(const char *lhs, const char *lhs_limit,
	const char *rhs, const char *rhs_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_compound_read_t com1, nu_compound_read_t com2,
	nu_codepointcmp_t compare,
	ssize_t *collated_left, ssize_t *collated_right) {

	int cmp = 0;

	const char *lp = lhs, *rp = rhs;
	const char *ltailp = 0, *rtailp = 0;
	nu_read_iterator_t ltail_read = 0, rtail_read = 0;

	uint32_t u1 = 0, u2 = 0;

	while ((lp < lhs_limit && rp < rhs_limit)
		|| (ltailp != 0 && rp < rhs_limit)
		|| (rtailp != 0 && lp < lhs_limit)) {

		lp = com1(lp, it1, &u1, &ltailp, &ltail_read);
		rp = com2(rp, it2, &u2, &rtailp, &rtail_read);

		cmp = compare(u1, u2, cmp);


		if (_nu_cmp_abort(cmp)) {
			break;
		}

		if (u1 == 0 || u2 == 0) {
			break;
		}
	}

	/* finalize comparator */
	if (_nu_cmp_undecided(cmp)) {
		cmp = compare(0, 0, cmp);
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

static int _nu_strcoll(const char *lhs, const char *lhs_limit,
	const char *rhs, const char *rhs_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_compound_read_t com1, nu_compound_read_t com2,
	nu_codepointcmp_t compare) {
	return _nu_collate(lhs, lhs_limit, rhs, rhs_limit,
		it1, it2, com1, com2,
		compare, 0, 0);
}

static const char* _nu_strchr(const char *lhs, const char *lhs_limit, uint32_t c,
	nu_read_iterator_t read, nu_compound_read_t com, nu_casemapping_t casemap) {

	const char *p = lhs;
	const char *tail = 0;
	nu_read_iterator_t tail_read = 0;
	uint32_t u = 0;

	const char *rhs = 0;
	nu_read_iterator_t rhs_read = 0;

	if (casemap != 0) {
		rhs = casemap(c, &rhs_read);
		if (rhs != 0) {
			rhs = rhs_read(rhs, &c); /* read new lead codepoint */
		}
	}

	while (p < lhs_limit) {
		const char *np = com(p, read, &u, &tail, &tail_read);

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
				rp = rhs_read(rp, &u2);

				if (u2 == 0) {
					return p; /* succ exit point */
				}

				if (np >= lhs_limit) {
					return 0;
				}

				np = com(np, read, &u, &tail, &tail_read);

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

static const char* _nu_strrchr(const char *encoded, const char *limit, uint32_t c,
	nu_read_iterator_t read, nu_compound_read_t com, nu_casemapping_t casemap) {

	/* there is probably not a lot of sense to find string end by decoding it
	 * and then reverse read string again, therefore this is a sequence
	 * of _nu_strchr() in forward direction */

	const char *p = encoded;
	const char *last = 0;

	while (p < limit) {
		p = _nu_strchr(p, limit, c, read, com, casemap);

		if (p == 0) {
			return last;
		}

		last = p;
		p = read(p, 0); /* skip one character and continue */
	}

	return last;
}

static const char* _nu_strstr(const char *haystack, const char *haystack_limit,
	const char *needle, const char *needle_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_compound_read_t com1, nu_compound_read_t com2,
	nu_casemapping_t casemap, nu_codepointcmp_t compare) {

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
		h0 = _nu_strchr(h0, haystack_limit, n0,
			it1, com1, casemap);

		if (h0 == 0) {
			break;
		}

		ssize_t collated_left = 0, collated_right = 0;
		_nu_collate(h0, haystack_limit,
			needle, needle_limit,
			it1, it2, com1, com2, compare,
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

#ifdef NU_WITH_Z_COLLATION

const char* nu_strchr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, NU_UNLIMITED, c,
		read, _nu_casemapnop_read, 0);
}

const char* nu_strcasechr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, NU_UNLIMITED, c,
		read, _nu_toupper_read, nu_toupper);
}

const char* nu_strrchr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strrchr(encoded, NU_UNLIMITED, c,
		read, _nu_casemapnop_read, 0);
}

const char* nu_strrcasechr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strrchr(encoded, NU_UNLIMITED, c,
		read, _nu_toupper_read, nu_toupper);
}

int nu_strcoll(const char *s1, const char *s2,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, NU_UNLIMITED, s2, NU_UNLIMITED,
		s1_read, s2_read, _nu_casemapnop_read, _nu_casemapnop_read,
		nu_ducet_codepointcmp);
}

int nu_strcasecoll(const char *s1, const char *s2,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, NU_UNLIMITED, s2, NU_UNLIMITED,
		s1_read, s2_read, _nu_toupper_read, _nu_toupper_read,
		nu_ducet_codepointcmp);
}

const char* nu_strstr(const char *haystack, const char *needle,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack, NU_UNLIMITED, needle, NU_UNLIMITED,
		haystack_read, needle_read,
		_nu_casemapnop_read, _nu_casemapnop_read,
		casemap_nop, nu_ducet_codepointcmp);
}

const char* nu_strcasestr(const char *haystack, const char *needle,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack, NU_UNLIMITED, needle, NU_UNLIMITED,
		haystack_read, needle_read,
		_nu_toupper_read, _nu_toupper_read,
		nu_toupper, nu_ducet_codepointcmp);
}

#endif /* NU_WITH_Z_COLLATION */

#ifdef NU_WITH_N_COLLATION

const char* nu_strnchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, encoded + max_len, c,
		read, _nu_casemapnop_read, 0);
}

const char* nu_strcasenchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, encoded + max_len, c,
		read, _nu_toupper_read, nu_toupper);
}

const char* nu_strrnchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t read) {
	return _nu_strrchr(encoded, encoded + max_len, c,
		read, _nu_casemapnop_read, 0);
}

const char* nu_strrcasenchr(const char *encoded, size_t max_len, uint32_t c,
	nu_read_iterator_t read) {
	return _nu_strrchr(encoded, encoded + max_len, c,
		read, _nu_toupper_read, nu_toupper);
}

int nu_strncoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, s1 + s1_max_len, s2, s2 + s2_max_len,
		s1_read, s2_read, _nu_casemapnop_read, _nu_casemapnop_read,
		nu_ducet_codepointcmp);
}

int nu_strcasencoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, s1 + s1_max_len, s2, s2 + s2_max_len,
		s1_read, s2_read, _nu_toupper_read, _nu_toupper_read,
		nu_ducet_codepointcmp);
}

const char* nu_strnstr(const char *haystack, size_t haystack_max_len,
	const char *needle, size_t needle_max_len,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack,  haystack + haystack_max_len,
		needle, needle + needle_max_len,
		haystack_read, needle_read,
		_nu_casemapnop_read, _nu_casemapnop_read,
		casemap_nop, nu_ducet_codepointcmp);
}

const char* nu_strcasenstr(const char *haystack, size_t haystack_max_len,
	const char *needle, size_t needle_max_len,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack,  haystack + haystack_max_len,
		needle, needle + needle_max_len,
		haystack_read, needle_read,
		_nu_toupper_read, _nu_toupper_read,
		nu_toupper, nu_ducet_codepointcmp);
}

#endif /* NU_WITH_N_COLLATION */
