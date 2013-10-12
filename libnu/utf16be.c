#include "utf16be.h"
#include "utf16_internal.h"

#ifdef NU_WITH_UTF16BE_READER

const char* nu_utf16be_read(const char *utf16, uint32_t *unicode) {
	uint16_t c0 = nu_betohs(utf16);
	unsigned len = utf16_char_length(c0);

	if (unicode != 0) {
		switch (len) {
		case 2: *unicode = c0; break;
		case 4: {
			uint16_t c1 = nu_betohs(utf16 + 2);
			utf16_4b(c0, c1, unicode); break;
		}
		default: return 0; /* abort */
		}
	}

	return utf16 + len;
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
#endif /* NU_WITH_UTF16BE_READER */

#ifdef NU_WITH_UTF16BE_WRITER

char* nu_utf16be_write(uint32_t unicode, char *utf16) {
	unsigned codepoint_len = utf16_codepoint_length(unicode);

	if (utf16 != 0) {
		switch (codepoint_len) {
			case 2: nu_htobes((uint16_t)(unicode), utf16); break;
			case 4: {
				uint16_t c0 = 0, c1 = 0;
				b4_utf16(unicode, &c0, &c1);
				nu_htobes(c0, utf16);
				nu_htobes(c1, utf16 + 2);
				break;
			}
			default: return 0; /* abort */
		}
	}

	return utf16 + codepoint_len;
}

#endif /* NU_WITH_UTF16BE_WRITER */
