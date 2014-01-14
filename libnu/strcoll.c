#include <stdint.h>

#include "defines.h"
#include "ducet.h"
#include "strcoll.h"
#include "casemap.h"

#if (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION)

static inline int _nu_cmp_abort(int state) {
	return (state == -1 || state == 1) ? 1 : 0;
}

static const char* casemap_nop(uint32_t codepoint, nu_read_iterator_t *it) {
	(void)(codepoint);
	(void)(it);

	return 0;
}

static int _nu_uint32_decomposed_cmp(uint32_t c,
	const char **decomposed, nu_read_iterator_t decomps_read,
	nu_codepointcmp_t compare, int state,
	const char **decomposed_tail) {

	uint32_t d = 0;
	*decomposed = decomps_read(*decomposed, &d);

	int cmp = compare(c, d, state);

	decomps_read(*decomposed, &d);
	*decomposed_tail = (d == 0 ? 0 : *decomposed);

	return cmp;
}

static int _nu_decomposed_decomposed_cmp(const char **lhs, const char **rhs,
	nu_read_iterator_t decomps_read, nu_codepointcmp_t compare, int state,
	const char **lhs_tail, const char **rhs_tail) {

	int cmp = state;

	uint32_t u1 = 0, u2 = 0;
	do {
		const char *p1 = decomps_read(*lhs, &u1);
		const char *p2 = decomps_read(*rhs, &u2);

		if (u1 == 0) {
			*lhs_tail = 0;
			*rhs_tail = (u2 == 0 ? 0 : *rhs);
			break;
		}

		if (u2 == 0) {
			*rhs_tail = 0;
			*lhs_tail = (u1 == 0 ? 0 : *lhs);
			break;
		}

		*lhs = p1;
		*rhs = p2;

		cmp = compare(u1, u2, cmp);
		if (_nu_cmp_abort(cmp)) {
			return cmp;
		}
	}
	while (u1 != 0 && u2 != 0);

	return cmp;
}

static int _nu_encoded_decomposed_cmp(const char **lhs, const char *lhs_limit, const char **rhs,
	nu_read_iterator_t lhs_read, nu_read_iterator_t rhs_read,
	nu_casemapping_t casemap, nu_codepointcmp_t compare, int state,
	const char **lhs_tail, const char **rhs_tail) {

	int cmp = state;

	while (*lhs < lhs_limit) {
		uint32_t u2 = 0;

		const char *p2 = rhs_read(*rhs, &u2);

		if (u2 == 0) {
			*rhs_tail = 0;
			return 0; /* cmp == 0 */
		}

		uint32_t u1 = 0;
		*lhs = lhs_read(*lhs, &u1);

		if (u1 == 0) {
			*rhs_tail = *rhs;
			return -1;
		}

		const char *lhs_decomps = casemap(u1, 0);
		if (lhs_decomps != 0) { /* don't compare decomposed values here */
			*lhs_tail = lhs_decomps;
			break;
		}

		*rhs = p2;

		cmp = compare(u1, u2, cmp);
		if (_nu_cmp_abort(cmp)) {
			break;
		}
	}

	/* read decomps once more to check
	 * if it's finished */

	uint32_t u2 = 0;
	rhs_read(*rhs, &u2);
	*rhs_tail = (u2 == 0 ? 0 : *rhs);

	return cmp;
}

static int _nu_encoded_encoded_cmp(const char **lhs, const char *lhs_limit,
	const char **rhs, const char *rhs_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_casemapping_t casemap, nu_codepointcmp_t compare, int state,
	const char **lhs_tail, const char **rhs_tail, nu_read_iterator_t *tail_read) {

	int cmp = state;

	uint32_t u1 = 0, u2 = 0;
	while (*lhs < lhs_limit && *rhs < rhs_limit) {
		*lhs = it1(*lhs, &u1);
		*rhs = it2(*rhs, &u2);

		if (u1 == 0 || u2 == 0) {
			break;
		}

		nu_read_iterator_t decomps_read = 0;
		const char *lhs_decomps = casemap(u1, &decomps_read);
		const char *rhs_decomps = casemap(u2, &decomps_read);

		if (lhs_decomps == 0 && rhs_decomps == 0) { /* no decomps */
			cmp = compare(u1, u2, cmp);
			if (_nu_cmp_abort(cmp)) {
				return cmp;
			}
		}
		else if (lhs_decomps == 0) { /* rhs_decomps != 0 */
			cmp = _nu_uint32_decomposed_cmp(u1, &rhs_decomps, decomps_read,
				compare, cmp, rhs_tail);
			if (_nu_cmp_abort(cmp) || *rhs_tail != 0) {
				*tail_read = decomps_read;
				return cmp;
			}
		}
		else if (rhs_decomps == 0) { /* lhs_decomps != 0 */
			cmp = _nu_uint32_decomposed_cmp(u2, &lhs_decomps, decomps_read,
				compare, cmp, lhs_tail) * -1;
			if (_nu_cmp_abort(cmp) || *lhs_tail != 0) {
				*tail_read = decomps_read;
				return cmp;
			}
		}
		else { /* both decomps */
			cmp = _nu_decomposed_decomposed_cmp(&lhs_decomps, &rhs_decomps,
				decomps_read, compare, cmp,
				lhs_tail, rhs_tail);
			if (_nu_cmp_abort(cmp) || *lhs_tail != 0 || *rhs_tail != 0) {
				*tail_read = decomps_read;
				return cmp;
			}
		}
	}

	if (cmp == 0) {
		if (u1 == 0 && u2 != 0) {
			cmp = -1;
		}
		else if (u2 == 0 && u1 != 0) {
			cmp = 1;
		}
	}

	return cmp;
}

static const char* _nu_strchr(const char *lhs, const char *lhs_limit, uint32_t u2,
	nu_read_iterator_t lhs_read,
	nu_casemapping_t casemap, nu_codepointcmp_t compare) {

	nu_read_iterator_t decomps_read = 0;
	const char *rhs_decomps = casemap(u2, &decomps_read);

	const char *lhs_tail = 0, *rhs_tail = 0;
	while (lhs < lhs_limit) {
		const char *p = lhs; /* needed for return */

		uint32_t u1 = 0;
		lhs = lhs_read(lhs, &u1);

		if (u1 == 0) {
			return 0;
		}

		const char *lhs_decomps = casemap(u1, &decomps_read);

		int cmp = 0;
		if (lhs_decomps == 0) {
			if (rhs_decomps == 0) {
				cmp = compare(u1, u2, cmp);
			}
			else {
				const char *tmp_rhs = rhs_decomps;
				const char *tmp_lhs = p;
				cmp = _nu_encoded_decomposed_cmp(&tmp_lhs, lhs_limit, &tmp_rhs,
					lhs_read, decomps_read,
					casemap, compare, cmp,
					&lhs_tail, &rhs_tail);

				if (rhs_tail != 0 /* it collated ok, but tail left */
				|| lhs_tail != 0) { /* encoded value decomposed into something */
					cmp = 1;
				}

				lhs = tmp_lhs;
			}
		}
		else { /* lhs_decomps != 0 */
			if (rhs_decomps != 0) {
				const char *tmp_rhs = rhs_decomps;
				cmp = _nu_decomposed_decomposed_cmp(&lhs_decomps, &tmp_rhs,
					decomps_read, compare, cmp,
					&lhs_tail, &rhs_tail);
			}
			else {
				cmp = _nu_uint32_decomposed_cmp(u2, &lhs_decomps,
					decomps_read, compare, cmp, &lhs_tail) * -1;
			}
		}

		if (cmp == 0) {
			return p;
		}
	}

	return 0;
}

static const char* _nu_strrchr(const char *encoded, const char *limit, uint32_t c,
	nu_read_iterator_t read,
	nu_casemapping_t casemap, nu_codepointcmp_t compare) {

	/* there is probably not a lot of sense to find string end by decoding it
	 * and then reverse read string again, therefore this is serie
	 * of _nu_strchr() */

	const char *p = encoded;
	const char *last = 0;

	while (p < limit) {
		p = _nu_strchr(p, limit, c, read,
			casemap, compare);

		if (p == 0) {
			return last;
		}

		last = p;
		p = read(p, 0); /* skip one character and continue */
	}

	return last;
}

static int _nu_collate(const char *lhs, const char *lhs_limit,
	const char *rhs, const char *rhs_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_casemapping_t casemap, nu_codepointcmp_t compare,
	ssize_t *collated_left, ssize_t *collated_right) {

	int cmp = 0;

	const char *p1 = lhs, *p2 = rhs;
	const char *lhs_tail = 0, *rhs_tail = 0;
	nu_read_iterator_t tail_read = 0;

	while ((p1 < lhs_limit && p2 < rhs_limit)
	|| (p1 < lhs_limit && rhs_tail != 0)
	|| (p2 < rhs_limit && lhs_tail != 0)
	|| (lhs_tail != 0 && rhs_tail != 0)) {

		if (lhs_tail != 0 && rhs_tail != 0) {
			cmp = _nu_decomposed_decomposed_cmp(&lhs_tail, &rhs_tail, tail_read,
				compare, cmp, &lhs_tail, &rhs_tail);
		}
		else if (lhs_tail != 0) {
			cmp = _nu_encoded_decomposed_cmp(&p2, rhs_limit, &lhs_tail,
				it2, tail_read,
				casemap, compare, cmp, &rhs_tail, &lhs_tail) * -1;
		}
		else if (rhs_tail != 0) {
			cmp = _nu_encoded_decomposed_cmp(&p1, lhs_limit, &rhs_tail,
				it1, tail_read,
				casemap, compare, cmp, &lhs_tail, &rhs_tail);
		}
		else {
			cmp = _nu_encoded_encoded_cmp(&p1, lhs_limit, &p2, rhs_limit,
				it1, it2, casemap, compare, cmp,
				&lhs_tail, &rhs_tail, &tail_read);
			if (lhs_tail == 0 && rhs_tail == 0) {
				break;
			}
		}

		if (_nu_cmp_abort(cmp)) {
			break;
		}
	}

	/* finalize comparator */
	if (cmp < -1 || cmp > 1) {
		cmp = compare(0, 0, cmp);
	}

	/* collated_left and collated_right should count
	 * number of successfully collated bytes, not taking
	 * into account limits. therefore if cmp != 0,
	 * number of collated bytes is decresed by (at least) 1
	 * and cmp is limits-fixed afterwards */

	if (collated_left != 0) {
		*collated_left = (p1 - lhs) - (cmp == 0 ? 0 : 1);
	}

	if (collated_right != 0) {
		*collated_right = (p2 - rhs) - (cmp == 0 ? 0 : 1);
	}

	if (cmp == 0) {
		if (p2 < rhs_limit && p1 >= lhs_limit) {
			cmp = -1;
		}
		else if (p1 < lhs_limit && p2 >= rhs_limit) {
			cmp = 1;
		}
	}

	return cmp;
}

static int _nu_strcoll(const char *lhs, const char *lhs_limit,
	const char *rhs, const char *rhs_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_casemapping_t casemap, nu_codepointcmp_t compare) {
	return _nu_collate(lhs, lhs_limit, rhs, rhs_limit, it1, it2,
		casemap, compare, 0, 0);
}

static const char* _nu_strstr(const char *haystack, const char *haystack_limit,
	const char *needle, const char *needle_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2,
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
		h0 = _nu_strchr(h0, haystack_limit, n0, it1,
			casemap, compare);

		if (h0 == 0) {
			break;
		}

		ssize_t collated_left = 0, collated_right = 0;
		_nu_collate(h0, haystack_limit,
			needle, needle_limit,
			it1, it2,
			casemap, compare,
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
	return _nu_strchr(encoded, NU_UNLIMITED, c, read,
		casemap_nop, nu_ducet_codepointcmp);
}

const char* nu_strcasechr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, NU_UNLIMITED, c, read,
		nu_toupper, nu_ducet_codepointcmp);
}

const char* nu_strrchr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strrchr(encoded, NU_UNLIMITED, c, read,
		casemap_nop, nu_ducet_codepointcmp);
}

const char* nu_strrcasechr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strrchr(encoded, NU_UNLIMITED, c, read,
		nu_toupper, nu_ducet_codepointcmp);
}

int nu_strcoll(const char *s1, const char *s2,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, NU_UNLIMITED, s2, NU_UNLIMITED,
		s1_read, s2_read, casemap_nop, nu_ducet_codepointcmp);
}

int nu_strcasecoll(const char *s1, const char *s2,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, NU_UNLIMITED, s2, NU_UNLIMITED,
		s1_read, s2_read, nu_toupper, nu_ducet_codepointcmp);
}

const char* nu_strstr(const char *haystack, const char *needle,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack, NU_UNLIMITED, needle, NU_UNLIMITED,
		haystack_read, needle_read,
		casemap_nop, nu_ducet_codepointcmp);
}

const char* nu_strcasestr(const char *haystack, const char *needle,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack, NU_UNLIMITED, needle, NU_UNLIMITED,
		haystack_read, needle_read,
		nu_toupper, nu_ducet_codepointcmp);
}

#endif /* NU_WITH_Z_COLLATION */

#ifdef NU_WITH_N_COLLATION

const char* nu_strnchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, encoded + max_len, c, read,
		casemap_nop, nu_ducet_codepointcmp);
}

const char* nu_strcasenchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, encoded + max_len, c, read,
		nu_toupper, nu_ducet_codepointcmp);
}

const char* nu_strrnchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t read) {
	return _nu_strrchr(encoded, encoded + max_len, c, read,
		casemap_nop, nu_ducet_codepointcmp);
}

const char* nu_strrcasenchr(const char *encoded, size_t max_len, uint32_t c,
	nu_read_iterator_t read) {
	return _nu_strrchr(encoded, encoded + max_len, c, read,
		nu_toupper, nu_ducet_codepointcmp);
}

int nu_strncoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, s1 + s1_max_len, s2, s2 + s2_max_len,
		s1_read, s2_read, casemap_nop, nu_ducet_codepointcmp);
}

int nu_strcasencoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len,
	nu_read_iterator_t s1_read, nu_read_iterator_t s2_read) {
	return _nu_strcoll(s1, s1 + s1_max_len, s2, s2 + s2_max_len,
		s1_read, s2_read, nu_toupper, nu_ducet_codepointcmp);
}

const char* nu_strnstr(const char *haystack, size_t haystack_max_len,
	const char *needle, size_t needle_max_len,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack,  haystack + haystack_max_len,
		needle, needle + needle_max_len,
		haystack_read, needle_read,
		casemap_nop, nu_ducet_codepointcmp);
}

const char* nu_strcasenstr(const char *haystack, size_t haystack_max_len,
	const char *needle, size_t needle_max_len,
	nu_read_iterator_t haystack_read, nu_read_iterator_t needle_read) {
	return _nu_strstr(haystack,  haystack + haystack_max_len,
		needle, needle + needle_max_len,
		haystack_read, needle_read,
		nu_toupper, nu_ducet_codepointcmp);
}

#endif /* NU_WITH_N_COLLATION */
