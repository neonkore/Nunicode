#include "utf16be.h"
#include "utf16_internal.h"

#ifdef NU_WITH_UTF16BE_READER

const char* nu_utf16be_read(const char *utf16, uint32_t *unicode) {
	uint32_t c = nu_betohs(utf16);

	if (c >= 0xD800 && c <= 0xDBFF) {
		if (unicode != 0) {
			/** UTF-16: 110110xx xxxxxxxx 110111yy yyyyyyyy
			 *
			 * 110110xx xxxxxxxx << 10 -> 00000000 0000xxxx xxxxxx00 00000000 |__ lead
			 *                                         -----------            |
			 * 110111yy yyyyyyyy       -> 00000000 0000xxxx xxxxxxyy yyyyyyyy |__ trail
			 *                                                    ----------- |
			 *                                                                  */
			*unicode = ((c & 0x03FF) << 10 | (nu_betohs(utf16 + 2) & 0x03FF)) + 0x10000;
		}
		return utf16 + 4;
	}
	else if (unicode != 0) {
		*unicode = c;
	}

	return utf16 + 2;
}

#ifdef NU_WITH_REVERSE_READ

const char* nu_utf16be_revread(uint32_t *unicode, const char *utf16) {
	/* valid UTF-16 sequences are either 2 or 4 bytes long
	 * trail sequences are between 0xDC00 .. 0xDFFF */
	const char *p = utf16 - 2;
	uint16_t ec = nu_betohs(p);

	if (ec >= 0xDC00 && ec <= 0xDFFF) { /* trail surrogate */
		p -= 2;
	}

	if (unicode != 0) {
		nu_utf16be_read(p, unicode);
	}

	return p;
}

#endif /* NU_WITH_REVERSE_READ */

#ifdef NU_WITH_VALIDATION

int nu_utf16be_validread(const char *encoded, size_t max_len) {
	if (max_len < 2) {
		return 0;
	}

	return utf16_validread(encoded, max_len);
}

#endif /* NU_WITH_VALIDATION */
#endif /* NU_WITH_UTF16BE_READER */

#ifdef NU_WITH_UTF16BE_WRITER

char* nu_utf16be_write(uint32_t unicode, char *utf16) {
	unsigned codepoint_len = utf16_codepoint_length(unicode);

	if (utf16 != 0) {
		switch (codepoint_len) {
			case 2: nu_htobes((uint16_t)(unicode), utf16); break;
			default: { /* len == 4 */
				uint16_t c0 = 0, c1 = 0;
				b4_utf16(unicode, &c0, &c1);
				nu_htobes(c0, utf16);
				nu_htobes(c1, utf16 + 2);
				break;
			}
		}
	}

	return utf16 + codepoint_len;
}

#endif /* NU_WITH_UTF16BE_WRITER */
