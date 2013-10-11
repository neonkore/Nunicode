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

int nu_readstr(const char *encoded, uint32_t *unicode, nu_read_iterator_t it) {
	const char *p = encoded;
	size_t i = 0;

	while (1) {
		if (p == 0) {
			return -1;
		}

		p = it(p, unicode + i);
		
		if (*p == 0) {
			break;
		}
		
		++i;
	}

	return 0;
}

int nu_writestr(const uint32_t *unicode, char *encoded, nu_write_iterator_t it) {
	char *p = encoded;
	const uint32_t *u = unicode;

	while (1) {
		if (p == 0) {
			return -1;
		}

		p = it(*u, p);
	
		if (*u == 0) {
			break;
		}
		
		++u;
	}

	return 0;
}

int nu_transformstr(const char *source, char *dest, nu_read_iterator_t read_it, nu_write_iterator_t write_it) {
	const char *p = source;
	char *d = dest;

	while (1) {
		if (p == 0 || d == 0) {
			return -1;
		}

		uint32_t u = 0;
		p = read_it(p, &u);
		d = write_it(u, d);
		
		if (*p == 0) {
			break;
		}
	}

	return 0;
}
