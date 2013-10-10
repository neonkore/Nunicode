#include <sys/types.h>

#include "iterators.h"

#ifdef NU_WITH_ITERATORS

int nu_read_str(const char *encoded, uint32_t *unicode, nu_read_iterator it) {
	const char *p = encoded;
	size_t i = 0;

	while (p != 0) {
		p = it(p, unicode + i);
		
		if (*p == 0) {
			break;
		}
		
		++i;
	}

	return 0;
}

int nu_write_str(const uint32_t *unicode, char *encoded, nu_write_iterator it) {
	char *p = encoded;
	const uint32_t *u = unicode;

	while (u != 0) {
		p = it(*u, p);
		
		if (*u == 0) {
			break;
		}
		
		++u;
	}

	return 0;
}

#endif /* NU_WITH_ITERATORS */
