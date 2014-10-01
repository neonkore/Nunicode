#include "utf8.h"
#include "utf8_internal.h"

#ifdef NU_WITH_UTF8_READER

const char* nu_utf8_read(const char *utf8, uint32_t *unicode) {
	uint32_t c = *(unsigned char *)(utf8);

	if (c >= 0x80) {
		if (c < 0xE0) {
			if (unicode != 0) {
				utf8_2b(utf8, unicode);
			}
			return utf8 + 2;
		}
		else if (c < 0xF0) {
			if (unicode != 0) {
				utf8_3b(utf8, unicode);
			}
			return utf8 + 3;
		}
		else {
			if (unicode != 0) {
				utf8_4b(utf8, unicode);
			}
			return utf8 + 4;
		}
	}
	else if (unicode != 0) {
		*unicode = c;
	}

	return utf8 + 1;
}

#ifdef NU_WITH_REVERSE_READ

const char* nu_utf8_revread(uint32_t *unicode, const char *utf8) {
	/* valid UTF-8 has either 10xxxxxx (continuation byte)
	 * or beginning of byte sequence */
	const char *p = utf8 - 1;
	while (((unsigned char)(*p) & 0xC0) == 0x80) { /* skip every 0b10000000 */
		--p;
	}

	if (unicode != 0) {
		nu_utf8_read(p, unicode);
	}

	return p;
}

#endif /* NU_WITH_REVERSE_READ */

#ifdef NU_WITH_VALIDATION

int nu_utf8_validread(const char *encoded, size_t max_len) {
	return utf8_validread(encoded, max_len);
}

#endif /* NU_WITH_VALIDATION */
#endif /* NU_WITH_UTF8_READER */

#ifdef NU_WITH_UTF8_WRITER

char* nu_utf8_write(uint32_t unicode, char *utf8) {
	unsigned codepoint_len = utf8_codepoint_length(unicode);

	if (utf8 != 0) {
		switch (codepoint_len) {
			case 1: *utf8 = (char)(unicode); break;
			case 2: b2_utf8(unicode, utf8); break;
			case 3: b3_utf8(unicode, utf8); break;
			default: b4_utf8(unicode, utf8); break; /* len == 4 */
		}
	}

	return utf8 + codepoint_len;
}

#endif /* NU_WITH_UTF8_WRITER */
