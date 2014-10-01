#include "utf32he.h"
#include "utf32_internal.h"

#ifdef NU_WITH_UTF32HE_READER
#ifdef NU_WITH_REVERSE_READ

const char* nu_utf32he_revread(uint32_t *unicode, const char *utf32) {
	const char *p = utf32 - 4;

	if (unicode != 0) {
		nu_utf32he_read(p, unicode);
	}

	return p;
}

#endif /* NU_WITH_REVERSE_READ */

#ifdef NU_WITH_VALIDATION

int nu_utf32he_validread(const char *p, size_t max_len) {
	return utf32_validread(p, max_len);
}

#endif /* NU_WITH_VALIDATION */
#endif /* NU_WITH_UTF32HE_READER */

#ifdef NU_WITH_UTF32HE_WRITER

char* nu_utf32he_write(uint32_t unicode, char *utf32) {
	*(uint32_t *)(utf32) = unicode;

	return utf32 + 4;
}

#endif /* NU_WITH_UTF32HE_WRITER */
