#include <stdint.h>

#include "ducet.h"
#include "strcoll.h"
#include "casemap.h"

static inline int _nu_uint32cmp(uint32_t u1, uint32_t u2) {
	if (u1 < u2) {
		return -1;
	}

	if (u1 > u2) {
		return 1;
	}
 
	return 0;
}

static inline int _nu_uint32_encoded_cmp(uint32_t u, const char *encoded,
	nu_read_iterator_t it, nu_codepointcmp_t compare) {

	uint32_t eu = 0;
	encoded = it(encoded, &eu);
	int cmp = compare(u, eu);

	if (cmp != 0) {
		return cmp;
	}

	/* no sense to compare further if length
	 * is different */

	it(encoded, &eu);

	cmp = (eu == 0 ? 0 : -1);
	return cmp;
}

static inline int _nu_uint32casecmp(uint32_t u1, uint32_t u2) {
	uint32_t up1 = nu_toupper(u1);
	uint32_t up2 = nu_toupper(u2);

	return _nu_uint32cmp((up1 == 0 ? u1 : up1),
		(up2 == 0 ? u2 : up2));
}

static int _nu_strcmp(const char *s1, const char *limit, const char *s2, 
	nu_read_iterator_t it1, nu_read_iterator_t it2, 
	nu_codepointcmp_t compare) {

	while (s1 < limit) {
		uint32_t u1 = 0, u2 = 0;

		s1 = it1(s1, &u1);
		s2 = it2(s2, &u2);

		if (u1 == 0 && u2 == 0) {
			return 0;
		}

		int cmp = compare(u1, u2);
		if (cmp != 0) {
			return cmp;
		}
	}

	return 0;
}

static inline int _nu_encoded_decomposed_cmp(const char **encoded, const char **decomposed,
	nu_read_iterator_t encoded_read, nu_read_iterator_t decomp_read,
	nu_codepointcmp_t compare,
	uint32_t *u1, uint32_t *u2) {

	do {
		const char *d = decomp_read(*decomposed, u2);
		const char *e = encoded_read(*encoded, u1);

		if (*u2 == 0) { /* end of decomposed value */
			break;
		}

		*decomposed = d;
		*encoded = e;
		
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
	nu_decompositor_t decompose, nu_codepointcmp_t compare) {

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
			cmp = compare(u1, u2);
			p1 = np1;
			p2 = np2;
			goto pass;
		}

		if (decomps1 == 0) {
			const char *pro = decomps2;
			cmp = _nu_encoded_decomposed_cmp(&p1, &decomps2, it1, decomps_read, 
				compare, &u1, &u2);
			p2 += (decomps2 - pro);
			goto pass;
		}

		if (decomps2 == 0) {
			const char *pro = decomps1;
			cmp = _nu_encoded_decomposed_cmp(&p2, &decomps1, it2, decomps_read,
				compare, &u1, &u2) * -1;
			p1 += (decomps1 - pro);
			goto pass;
		}

		const char *pro1 = decomps1;
		const char *pro2 = decomps2;
		cmp = _nu_encoded_decomposed_cmp(&decomps1, &decomps2, decomps_read, decomps_read,
			compare, &u1, &u2);
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

#ifdef NU_WITH_COLLATION

int nu_strcmp(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcmp(s1, (const char *)(-1), s2, it1, it2, _nu_uint32cmp);
}

int nu_strncmp(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcmp(s1, s1 + max_len, s2, it1, it2, _nu_uint32cmp);
}

int nu_strcoll(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, (const char *)(-1), s2, it1, it2,
		nu_decompose, _nu_uint32cmp);
}

int nu_strncoll(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, s1 + max_len, s2, it1, it2,
		nu_decompose, _nu_uint32cmp);
}

#endif /* NU_WITH_COLLATION */

#ifdef NU_WITH_CASEMAP

int nu_strcasecmp(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcmp(s1, (const char *)(-1), s2, it1, it2, _nu_uint32casecmp);
}

int nu_strcasencmp(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcmp(s1, s1 + max_len, s2, it1, it2, _nu_uint32casecmp);
}

int nu_strcasecoll(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, (const char *)(-1), s2, it1, it2,
		nu_decompose, _nu_uint32casecmp);
}

int nu_strcasencoll(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, s1 + max_len, s2, it1, it2, 
		nu_decompose, _nu_uint32casecmp);
}

#endif /* NU_WITH_CASEMAP */
