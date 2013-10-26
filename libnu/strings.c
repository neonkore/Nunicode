#include "strings.h"

#if defined (NU_WITH_Z_STRINGS) || defined(NU_WITH_N_STRINGS)

static ssize_t _nu_strlen(const char *encoded, const char *limit, nu_read_iterator_t it) {
	ssize_t len = 0;

	const char *p = encoded;
	while (p < limit) {
		if (*p == 0) {
			break;
		}
		
		const char *np = it(p, 0);
		if (np == 0) {
			return -(p - encoded + 1);
		}

		p = np;
		++len;
	}

	return len;
}

static ssize_t _nu_bytelen(const uint32_t *unicode, const uint32_t *limit, nu_write_iterator_t it) {
	ssize_t len = 0;

	const uint32_t *p = unicode;
	while (p < limit) {
		if (*p == 0) {
			break;
		}

		size_t byte_len = (size_t)it(*p, 0);
		len += byte_len;

		if (byte_len == 0) {
			return -(p - unicode + 1);
		}

		++p;
	}

	return len;
}

static const char* _nu_strchr(const char *encoded, const char *limit, uint32_t c, nu_read_iterator_t it) {
	const char *p = encoded;

	while (p < limit) {
		if (*p == 0) {
			break;
		}

		uint32_t u = 0;
		const char *np = it(p, &u);

		if (np == 0) {
			return 0;
		}

		if (u == c) {
			return p;
		}

		p = np;
	}

	return 0;
}

#endif /* NU_WITH_N_STRINGS || NU_WITH_Z_STRINGS */

#ifdef NU_WITH_Z_STRINGS

ssize_t nu_strlen(const char *encoded, nu_read_iterator_t it) {
	return _nu_strlen(encoded, (const char *)(-1), it);
}

ssize_t nu_bytelen(const uint32_t *unicode, nu_write_iterator_t it) {
	return _nu_bytelen(unicode, (const uint32_t *)(-1), it);
}

const char* nu_strchr(const char *encoded, uint32_t c, nu_read_iterator_t it) {
	return _nu_strchr(encoded, (const char *)(-1), c, it);
}

#endif /* NU_WITH_Z_STRINGS */

#ifdef NU_WITH_N_STRINGS

ssize_t nu_strnlen(const char *encoded, size_t max_len, nu_read_iterator_t it) {
	return _nu_strlen(encoded, encoded + max_len, it);
}

ssize_t nu_bytenlen(const uint32_t *unicode, size_t max_len, nu_write_iterator_t it) {
	return _nu_bytelen(unicode, unicode + max_len, it);
}

const char* nu_strnchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t it) {
	return _nu_strchr(encoded, encoded + max_len, c, it);
}

#endif /* NU_WITH_N_STRINGS */
