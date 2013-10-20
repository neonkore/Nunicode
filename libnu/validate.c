#include "validate.h"

#ifdef NU_WITH_VALIDATION

const char* nu_validate(const char *encoded, size_t max_len, nu_validread_iterator_t it) {
	const char *p = encoded;
	while (p < encoded + max_len) {
		int byte_len = it(p, max_len - (p - encoded));
		if (byte_len <= 0) {
			return p;
		}

		if (p + byte_len > encoded + max_len) {
			return p;
		}

		p += byte_len;
	}

	/* final check: p + byte_len should match encoded + max_len
	 * otherwise it's also an error */
	
	return (p == encoded + max_len ? 0 : p);
}

#endif /* NU_WITH_VALIDATION */
