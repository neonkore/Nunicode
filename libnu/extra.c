#include "strings.h"

#if defined (NU_WITH_Z_EXTRA) || defined(NU_WITH_N_EXTRA)

static int _nu_readstr(const char *encoded, const char *limit, uint32_t *unicode, nu_read_iterator_t it) {
	const char *p = encoded;
	size_t i = 0;

	while (p < limit) {
		const char *np = it(p, unicode + i);
		
		if (np == 0) {
			return -(p - encoded + 1);
		}

		p = np;
		
		if (*p == 0) {
			break;
		}
		
		++i;
	}

	return 0;
}

static int _nu_writestr(const uint32_t *unicode, const uint32_t *limit, char *encoded, nu_write_iterator_t it) {
	char *p = encoded;
	const uint32_t *u = unicode;

	while (u < limit) {
		p = it(*u, p);
	
		if (p == 0) {
			return -(u - unicode + 1);
		}

		if (*u == 0) {
			break;
		}
		
		++u;
	}

	return 0;
}

static int _nu_transformstr(const char *source, const char *limit, char *dest, nu_read_iterator_t read_it, nu_write_iterator_t write_it) {
	const char *p = source;
	char *d = dest;

	while (p < limit) {
		uint32_t u = 0;
		const char *np = read_it(p, &u);
		if (np == 0) {
			return -(p - source + 1);
		}

		p = np;

		char *nd = write_it(u, d);
		if (nd == 0) {
			return -(d - dest + 1) * 2;
		}

		d = nd;
		
		if (*p == 0) {
			break;
		}
	}

	return 0;
}

#endif /* NU_WITH_N_EXTRA || NU_WITH_Z_EXTRA */

#ifdef NU_WITH_Z_EXTRA

int nu_readstr(const char *encoded, uint32_t *unicode, nu_read_iterator_t it) {
	return _nu_readstr(encoded, (const char *)(-1), unicode, it);
}

int nu_writestr(const uint32_t *unicode, char *encoded, nu_write_iterator_t it) {
	return _nu_writestr(unicode, (const uint32_t *)(-1), encoded, it);
}

int nu_transformstr(const char *source, char *dest, nu_read_iterator_t read_it, nu_write_iterator_t write_it) {
	return _nu_transformstr(source, (const char *)(-1), dest, read_it, write_it);
}

#endif /* NU_WITH_Z_EXTRA */

#ifdef NU_WITH_N_EXTRA

int nu_readnstr(const char *encoded, size_t max_len, uint32_t *unicode, nu_read_iterator_t it) {
	return _nu_readstr(encoded, encoded + max_len, unicode, it);
}

int nu_writenstr(const uint32_t *unicode, size_t max_len, char *encoded, nu_write_iterator_t it) {
	return _nu_writestr(unicode, unicode + max_len, encoded, it);
}

int nu_transformnstr(const char *source, size_t max_len, char *dest, nu_read_iterator_t read_it, nu_write_iterator_t write_it) {
	return _nu_transformstr(source, source + max_len, dest, read_it, write_it);
}

#endif /* NU_WITH_N_EXTRA */
