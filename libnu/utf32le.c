#include "utf32le.h"

#ifdef NU_WITH_UTF32LE_READER
#ifdef NU_WITH_REVERSE_READ

const char* nu_utf32le_revread(uint32_t *unicode, const char *utf32) {
	const char *p = utf32 - 4;

	if (unicode != 0) {
		nu_utf32le_read(p, unicode);
	}

	return p;
}

#endif /* NU_WITH_REVERSE_READ */

#ifdef NU_WITH_VALIDATION

int nu_utf32le_validread(const char *p, size_t max_len) {
	return utf32_validread(p, max_len);
}

#endif /* NU_WITH_VALIDATION */
#endif /* NU_WITH_UTF32LE_READER */

#ifdef NU_WITH_UTF32LE_WRITER

char* nu_utf32le_write(uint32_t unicode, char *utf32) {
	nu_htolel(unicode, utf32);

	return utf32 + 4;
}

#endif /* NU_WITH_UTF32LE_WRITER */
