#include <stdint.h>
#include <string.h>

#include "ducet.h"
#include "strcoll.h"
#include "casemap.h"

#define MIN(x, y) (((x) < (y)) ? (x) : (y))

#if (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION)

static inline int _nu_uint32cmp(uint32_t u1, uint32_t u2) {
	if (u1 < u2) {
		return -1;
	}

	if (u1 > u2) {
		return 1;
	}
 
	return 0;
}

static int _nu_strcmp(const char *s1, const char *limit, const char *s2, 
	nu_read_iterator_t it1, nu_read_iterator_t it2, 
	nu_casemapping_t casemap, nu_codepointcmp_t compare) {

	while (s1 < limit) {
		uint32_t u1 = 0, u2 = 0;

		s1 = it1(s1, &u1);
		s2 = it2(s2, &u2);

		if (u1 == 0 && u2 == 0) {
			return 0;
		}

		if (casemap != 0) {
			u1 = casemap(u1);
			u2 = casemap(u2);
		}

		int cmp = compare(u1, u2);
		if (cmp != 0) {
			return cmp;
		}
	}

	return 0;
}

static int _nu_encoded_decomposed_cmp(const char **encoded, const char **decomposed,
	nu_read_iterator_t encoded_read, nu_read_iterator_t decomp_read,
	nu_casemapping_t casemap, nu_codepointcmp_t compare,
	uint32_t *u1, uint32_t *u2) {

	do {
		const char *d = decomp_read(*decomposed, u2);
		const char *e = encoded_read(*encoded, u1);

		if (*u2 == 0) { /* end of decomposed value */
			break;
		}

		*decomposed = d;
		*encoded = e;
		
		if (casemap != 0) {
			*u1 = casemap(*u1);
			*u2 = casemap(*u2);
		}

		int cmp = compare(*u1, *u2);
		if (cmp != 0) {
			return cmp;
		}
	}
	while (*u1 != 0 && *u2 != 0);

	return 0;
}

static int _nu_strcoll(const char *p1, const char *limit, const char *p2, 
	nu_read_iterator_t it1, nu_read_iterator_t it2, 
	nu_casemapping_t casemap, nu_decompositor_t decompose, nu_codepointcmp_t compare) {

	while (p1 < limit) {
		uint32_t u1 = 0, u2 = 0;

		const char *np1 = it1(p1, &u1);
		const char *np2 = it2(p2, &u2);

		if (u1 == 0 && u2 == 0) {
			return 0;
		}

		nu_read_iterator_t decomps_read = 0;
		const char *decomps1 = decompose(u1, &decomps_read);
		const char *decomps2 = decompose(u2, &decomps_read);

		int cmp = 0;
		if (decomps1 == 0 && decomps2 == 0) {
			if (casemap != 0) {
				u1 = casemap(u1);
				u2 = casemap(u2);
			}

			cmp = compare(u1, u2);
			p1 = np1;
			p2 = np2;
			goto pass;
		}

		if (decomps1 == 0) {
			const char *pro = decomps2;
			cmp = _nu_encoded_decomposed_cmp(&p1, &decomps2, it1, decomps_read, 
				casemap, compare, &u1, &u2);
			p2 += (decomps2 - pro);
			goto pass;
		}

		if (decomps2 == 0) {
			const char *pro = decomps1;
			cmp = _nu_encoded_decomposed_cmp(&p2, &decomps1, it2, decomps_read,
				casemap, compare, &u1, &u2) * -1;
			p1 += (decomps1 - pro);
			goto pass;
		}

		const char *pro1 = decomps1;
		const char *pro2 = decomps2;
		cmp = _nu_encoded_decomposed_cmp(&decomps1, &decomps2, decomps_read, decomps_read,
			casemap, compare, &u1, &u2);
		p1 += (decomps1 - pro1);
		p2 += (decomps2 - pro2);

pass:
		if (cmp == 0) {
			if (u1 == 0 && u2 == 0) {
				return 0;
			}

			continue;
		}

		return cmp;
	}

	return 0;
}

static const char* _nu_strstr(const char *haystack, const char *limit,
	const char *needle, nu_read_iterator_t it1, nu_read_iterator_t it2,
	nu_casemapping_t casemap, nu_decompositor_t decompose, nu_codepointcmp_t compare) {

	size_t needle_len = nu_len(needle, it2);

	uint32_t n0 = 0;
	it2(needle, &n0);

	if (n0 == 0) {
		return haystack;
	}

	if (casemap != 0) {
		n0 = casemap(n0);
	}

	const char *p = haystack;
	while (p < limit && (size_t)(limit - p) >= needle_len) {
		uint32_t h0 = 0;
		const char *np = it1(p, &h0);

		if (h0 == 0) {
			return 0;
		}

		if (casemap != 0) {
			h0 = casemap(h0);
		}

		if (h0 != n0) {
			goto pass;
		}

		/* FIXME: _nu_strcoll should advance p to skip already
                 * checked part */
		int coll = _nu_strcoll(p, MIN(limit, p + needle_len), needle,
			it1, it2,
			casemap, decompose, compare);

		if (coll == 0) {
			return p;
		}

pass:
		p = np;
	}

	return 0;
}

#endif /* NU_WITH_Z_COLLATION || NU_WITH_N_COLLATION */

#ifdef NU_WITH_Z_COLLATION

int nu_strcmp(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcmp(s1, (const char *)(-1), s2, it1, it2,
		0, _nu_uint32cmp);
}

int nu_strncmp(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcmp(s1, s1 + max_len, s2, it1, it2, 
		0, _nu_uint32cmp);
}

int nu_strcoll(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, (const char *)(-1), s2, it1, it2,
		0, nu_decompose, _nu_uint32cmp);
}

int nu_strncoll(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, s1 + max_len, s2, it1, it2,
		0, nu_decompose, _nu_uint32cmp);
}

const char* nu_strstr(const char *haystack, const char *needle,
	nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strstr(haystack, (const char *)(-1), needle, it1, it2,
		0, nu_decompose, _nu_uint32cmp);
}

const char* nu_strnstr(const char *haystack, size_t max_len, const char *needle,
	nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strstr(haystack, haystack + max_len, needle, it1, it2,
		0, nu_decompose, _nu_uint32cmp);
}

#endif /* NU_WITH_Z_COLLATION */

#ifdef NU_WITH_N_COLLATION

int nu_strcasecmp(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcmp(s1, (const char *)(-1), s2, it1, it2,
		nu_toupper, _nu_uint32cmp);
}

int nu_strcasencmp(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcmp(s1, s1 + max_len, s2, it1, it2, 
		nu_toupper, _nu_uint32cmp);
}

int nu_strcasecoll(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, (const char *)(-1), s2, it1, it2,
		nu_toupper, nu_decompose, _nu_uint32cmp);
}

int nu_strcasencoll(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, s1 + max_len, s2, it1, it2, 
		nu_toupper, nu_decompose, _nu_uint32cmp);
}

const char* nu_strcasestr(const char *haystack, const char *needle,
	nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strstr(haystack, (const char *)(-1), needle, it1, it2,
		nu_toupper, nu_decompose, _nu_uint32cmp);
}

const char* nu_strcasenstr(const char *haystack, size_t max_len, const char *needle,
	nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strstr(haystack, haystack + max_len, needle, it1, it2,
		nu_toupper, nu_decompose, _nu_uint32cmp);
}

#endif /* NU_WITH_N_COLLATION */
