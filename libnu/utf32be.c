#include "utf32be.h"
#include "utf32_internal.h"

#ifdef NU_WITH_UTF32BE_READER

const char* nu_utf32be_read(const char *utf32, uint32_t *unicode) {
	if (unicode != 0) {
		*unicode = nu_betohl(utf32);
	}

	return utf32 + 4;
}

#ifdef NU_WITH_REVERSE_READ

const char* nu_utf32be_revread(uint32_t *unicode, const char *utf32) {
	const char *p = utf32 - 4;

	if (unicode != 0) {
		nu_utf32be_read(p, unicode);
	}

	return p;
}

#endif /* NU_WITH_REVERSE_READ */

#ifdef NU_WITH_VALIDATION

int nu_utf32be_validread(const char *p, size_t max_len) {
	return utf32_validread(p, max_len);
}

#endif /* NU_WITH_VALIDATION */
#endif /* NU_WITH_UTF32BE_READER */

#ifdef NU_WITH_UTF32BE_WRITER

char* nu_utf32be_write(uint32_t unicode, char *utf32) {
	nu_htobel(unicode, utf32);

	return utf32 + 4;
}

#endif /* NU_WITH_UTF32BE_WRITER */
