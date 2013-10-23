#include "strings.h"

#if defined (NU_WITH_Z_STRINGS) || defined(NU_WITH_N_STRINGS)

static ssize_t _nu_len(const char *encoded, const char *limit, nu_read_iterator_t it) {
	const char *p = encoded;
	while (p < limit) {
		if (*p == 0) {
			break;
		}
		
		p = it(p, 0);
	}

	return (p - encoded);
}

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

static inline const char* _nu_strstr_probe(const char **haystack, const char *limit,
	const char *needle, nu_read_iterator_t it1, nu_read_iterator_t it2) {

	const char *h = *haystack;
	const char *n = needle;

	while (h < limit) {
		uint32_t hi = 0, ni = 0;
		n = it2(n, &ni);

		if (ni == 0) {
			return h;
		}

		const char *nh = it1(h, &hi);

		if (hi == 0 || hi != ni) {
			*haystack = h;
			return 0;
		}

		h = nh;
	}

	/* check at the end of haystack if we've reached 
         * end of needle, if so - string is found */

	uint32_t border = 0;
	it2(n, &border);

	return (border == 0 ? h : 0);
}

static const char* _nu_strstr(const char *haystack, const char *limit,
	const char *needle, nu_read_iterator_t it1, nu_read_iterator_t it2) {

	uint32_t n0 = 0;
	needle = it2(needle, &n0);

	if (n0 == 0) {
		return haystack;
	}

	const char *p = haystack;
	while (p < limit) {
		uint32_t h0 = 0;
		const char *np = it1(p, &h0);

		if (h0 == 0) {
			return 0;
		}

		if (h0 != n0) {
			goto pass;
		}

		const char *end = _nu_strstr_probe(&np, limit,
			needle, it1, it2);

		if (end != 0) {
			return p;
		}

pass:
		p = np;
	}

	return 0;
}

#endif /* NU_WITH_N_STRINGS || NU_WITH_Z_STRINGS */

#ifdef NU_WITH_Z_STRINGS

ssize_t nu_len(const char *encoded, nu_read_iterator_t it) {
	return _nu_len(encoded, (const char *)(-1), it);
}

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

const char* nu_strstr(const char *haystack, const char *needle,
	nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strstr(haystack, (const char *)(-1), needle, it1, it2);
}

#endif /* NU_WITH_Z_STRINGS */

#ifdef NU_WITH_N_STRINGS

ssize_t nu_nlen(const char *encoded, size_t max_len, nu_read_iterator_t it) {
	return _nu_len(encoded, encoded + max_len, it);
}

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

const char* nu_strnstr(const char *haystack, size_t max_len, const char *needle,
	nu_read_iterator_t it1, nu_read_iterator_t it2) {
	return _nu_strstr(haystack, haystack + max_len, needle, it1, it2);
}

#endif /* NU_WITH_N_STRINGS */
