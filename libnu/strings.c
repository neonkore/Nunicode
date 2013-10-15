#include "strings.h"

#if defined (NU_WITH_Z_STRINGS) || defined(NU_WITH_N_STRINGS)

static ssize_t _nu_strlen(const char *encoded, const char *limit, nu_read_iterator_t it) {
	ssize_t len = 0;

	const char *p = encoded;
	while (p < limit) {
		if (*p == 0) {
			break;
		}

		p = it(p, 0);
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

		if (u == c) {
			return p;
		}

		p = np;
	}

	return 0;
}

static const char* _nu_strrchr(const char *encoded, const char *limit, uint32_t c, nu_read_iterator_t it) {
	const char *p = encoded;
	const char *last = 0;

	while (p < limit) {
		if (*p == 0) {
			break;
		}

		uint32_t u = 0;
		const char *np = it(p, &u);

		if (u == c) {
			last  = p;
		}

		p = np;
	}

	return last;
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

const char* nu_strrchr(const char *encoded, uint32_t c, nu_read_iterator_t it) {
	return _nu_strrchr(encoded, (const char *)(-1), c, it);
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

const char* nu_strrnchr(const char *encoded, size_t max_len, uint32_t c, nu_read_iterator_t it) {
	return _nu_strrchr(encoded, encoded + max_len, c, it);
}

#endif /* NU_WITH_N_STRINGS */