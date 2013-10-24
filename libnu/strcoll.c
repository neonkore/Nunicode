#include <stdint.h>

#include "ducet.h"
#include "strcoll.h"
#include "casemap.h"

#if (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION)

static uint32_t casemap_nop(uint32_t codepoint) {
	return codepoint;
}

static inline int _nu_uint32cmp(uint32_t u1, uint32_t u2, nu_casemapping_t casemap) {
	uint32_t cu1 = casemap(u1);
	uint32_t cu2 = casemap(u2);

	if (cu1 < cu2) {
		return -1;
	}

	if (cu1 > cu2) {
		return 1;
	}
 
	return 0;
}

#include <stdio.h>

static int _nu_encoded_decomposed_cmp(const char **encoded, const char *limit, const char **decomposed,
	nu_read_iterator_t encoded_read, nu_read_iterator_t decomps_read,
	nu_casemapping_t casemap, nu_codepointcmp_t compare,
	uint32_t *u1, uint32_t *u2) {

	while (*encoded < limit) {
		const char *d = decomps_read(*decomposed, u2);
		const char *e = encoded_read(*encoded, u1);

		if (*u2 == 0) { /* end of decomposed value */
			return 0;
		}

		*decomposed = d;
		*encoded = e;

		printf("u1: %06X\n", *u1);
		printf("u2: %06X\n", *u2);
		
		int cmp = compare(*u1, *u2, casemap);
		if (cmp != 0) {
			return cmp;
		}

		printf("encoded: %p\n", *encoded);
		printf("limit: %p\n", limit);
	}

	/* read from decomps again, if end reached
         * then strings are equal */

	decomps_read(*decomposed, u2);

	return (*u2 == 0 ? 0 : -1);
}

static int _nu_uint32_decomposed_cmp(uint32_t c, const char **decomposed,
	nu_read_iterator_t decomps_read,
	nu_casemapping_t casemap, nu_codepointcmp_t compare) {

	uint32_t d = 0;
	*decomposed = decomps_read(*decomposed, &d);

	return compare(c, d, casemap);
}

static const char* _nu_strchr(const char *encoded, const char *limit, uint32_t c, nu_read_iterator_t read,
	nu_casemapping_t casemap, nu_decompositor_t decompose, nu_codepointcmp_t compare) {

	nu_read_iterator_t decomps_read = 0;
	const char *decomps = decompose(c, &decomps_read);

	const char *p = encoded;
	while (p < limit) {
		uint32_t u = 0;
		const char *np = read(p, &u);

		if (u == 0) {
			return 0;
		}

		const char *u_decomps = decompose(u, 0);

		int cmp = 0;
		if (decomps == 0 && u_decomps == 0) {
			cmp = compare(c, u, casemap);
			goto pass;
		}

		if (decomps == 0) {
			cmp = _nu_uint32_decomposed_cmp(c, &u_decomps, decomps_read, 
				casemap, compare);
			goto pass;
		}

		if (u_decomps == 0) {
			const char *t_encoded = p;
			const char *t_decomps = decomps;
			uint32_t u1 = 0, u2 = 0;
			cmp = _nu_encoded_decomposed_cmp(&t_encoded, limit, &t_decomps, 
				read, decomps_read, 
				casemap, compare, &u1, &u2) * -1;
			printf("cmp: %d\n", cmp);
			goto pass;
		}

		const char *t_decomps = decomps;
		uint32_t u1 = 0, u2 = 0;
		cmp = _nu_encoded_decomposed_cmp(&t_decomps, limit, &u_decomps,
			decomps_read, decomps_read,
			casemap, compare, &u1, &u2);

pass:
		if (cmp == 0) {
			return p;
		}

		p = np;
	}

	return 0;
}

static int _nu_strcoll(const char *p1, const char *p1_limit,
	const char *p2, const char *p2_limit,
	nu_read_iterator_t it1, nu_read_iterator_t it2, 
	nu_casemapping_t casemap, nu_decompositor_t decompose, nu_codepointcmp_t compare) {

	while (p1 < p1_limit && p2 < p2_limit) {
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
			cmp = compare(u1, u2, casemap);
			p1 = np1;
			p2 = np2;
			goto pass;
		}

		if (decomps1 == 0) {
			const char *pro = decomps2;
			cmp = _nu_encoded_decomposed_cmp(&p1, p1_limit, &decomps2, it1, decomps_read, 
				casemap, compare, &u1, &u2);
			p2 += (decomps2 - pro);
			goto pass;
		}

		if (decomps2 == 0) {
			const char *pro = decomps1;
			cmp = _nu_encoded_decomposed_cmp(&p2, p2_limit, &decomps1, it2, decomps_read,
				casemap, compare, &u1, &u2) * -1;
			p1 += (decomps1 - pro);
			goto pass;
		}

		const char *pro1 = decomps1;
		const char *pro2 = decomps2;
		cmp = _nu_encoded_decomposed_cmp(&decomps1, (const char *)(-1), &decomps2,
			decomps_read, decomps_read, 
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

#endif /* NU_WITH_Z_COLLATION || NU_WITH_N_COLLATION */

#ifdef NU_WITH_Z_COLLATION

const char* nu_strchr(const char *encoded, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, (const char *)(-1), c, read,
		casemap_nop, nu_decompose, _nu_uint32cmp);
}

int nu_strcoll(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, (const char *)(-1), s2, (const char *)(-1),
		it1, it2, casemap_nop, nu_decompose, _nu_uint32cmp);
}

int nu_strcasecoll(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, (const char *)(-1), s2, (const char *)(-1),
		it1, it2, nu_toupper, nu_decompose, _nu_uint32cmp);
}

#endif /* NU_WITH_Z_COLLATION */

#ifdef NU_WITH_N_COLLATION

const char* nu_strnchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t read) {
	return _nu_strchr(encoded, encoded + max_len, c, read, 
		casemap_nop, nu_decompose, _nu_uint32cmp);
}

int nu_strncoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, s1 + s1_max_len, s2, s2 + s2_max_len,
		it1, it2, casemap_nop, nu_decompose, _nu_uint32cmp);
}

int nu_strcasencoll(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len,
	nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strcoll(s1, s1 + s1_max_len, s2, s2 + s2_max_len,
		it1, it2, nu_toupper, nu_decompose, _nu_uint32cmp);
}

#endif /* NU_WITH_N_COLLATION */
