#include "strings.h"

ssize_t nu_strlen(const char *encoded, nu_read_iterator_t it) {
	ssize_t len = 0;

	const char *p = encoded;
	while (1) {
		if (*p == 0) {
			break;
		}

		p = it(p, 0);
		++len;
	}

	return len;
}

ssize_t nu_bytelen(const uint32_t *unicode, nu_write_iterator_t it) {
	ssize_t len = 0;

	const uint32_t *p = unicode;
	while (1) {
		if (*p == 0) {
			break;
		}

		size_t byte_len = (size_t)it(*p, 0);
		len += byte_len;

		++p;
	}

	return len;
}
