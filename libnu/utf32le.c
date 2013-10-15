#include "utf32le.h"
#include "utf32_internal.h"

#ifdef NU_WITH_UTF32LE_READER

const char* nu_utf32le_read(const char *utf32, uint32_t *unicode) {
	if (unicode != 0) {
		*unicode = nu_letohl(utf32);
	}

	return utf32 + 4;
}

#ifdef NU_WITH_REVERSE_READ

const char* nu_utf32le_revread(uint32_t *unicode, const char *utf32) {
	const char *p = utf32 - 4;

	if (unicode != 0) {
		nu_utf32le_read(p, unicode);
	}

	return p;
}

#endif /* NU_WITH_REVERSE_READ */
#endif /* NU_WITH_UTF32LE_READER */

#ifdef NU_WITH_UTF32LE_WRITER

char* nu_utf32le_write(uint32_t unicode, char *utf32) {
	nu_htolel(unicode, utf32);

	return utf32 + 4;
}

#endif /* NU_WITH_UTF32LE_WRITER */