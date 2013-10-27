#include "utf16he.h"
#include "utf16_internal.h"

#ifdef NU_WITH_UTF16HE_READER

const char* nu_utf16he_read(const char *utf16, uint32_t *unicode) {
	uint16_t c0 = *(uint16_t *)(utf16);
	unsigned len = utf16_char_length(c0);

	if (unicode != 0) {
		switch (len) {
		case 2: *unicode = c0; break;
		case 4: {
			uint16_t c1 = *(uint16_t *)(utf16 + 2);
			utf16_4b(c0, c1, unicode);
			break;
		}
		}
	}

	switch (len) {
		case 2: case 4: break;
		default: return 0; /* abort */
	}

	return utf16 + len;
}

#ifdef NU_WITH_REVERSE_READ

const char* nu_utf16he_revread(uint32_t *unicode, const char *utf16) {
	/* valid UTF-16 sequences are either 2 or 4 bytes long
	 * trail sequences are between 0xDC00 .. 0xDFFF */
	const char *p = utf16 - 2;
	uint16_t ec = *(uint16_t *)(p);

	if (ec >= 0xDC00 && ec <= 0xDFFF) { /* trail surrogate */
		p -= 2;
	}

	if (unicode != 0) {
		nu_utf16he_read(p, unicode);
	}

	return p;
}

#endif /* NU_WITH_REVERSE_READ */

#ifdef NU_WITH_VALIDATION

int nu_utf16he_validread(const char *encoded, size_t max_len) {
	if (max_len < 2) {
		return 0;
	}

	char lead = (*(uint16_t *)(encoded) & 0xFF00) >> 8;

	if (utf16_valid_lead(lead) != 0) {
		if (max_len < 4) {
			return 0;
		}

		char trail = (*(uint16_t *)(encoded + 2) & 0xFF00) >> 8;

		if (utf16_valid_trail(trail) == 0) {
			return 0;
		}

		return 4;
	}

	if (utf16_valid_trail(lead) != 0) {
		return 0;
	}

	return 2;
}

#endif /* NU_WITH_VALIDATION */
#endif /* NU_WITH_UTF16HE_READER */

#ifdef NU_WITH_UTF16HE_WRITER

char* nu_utf16he_write(uint32_t unicode, char *utf16) {
	unsigned codepoint_len = utf16_codepoint_length(unicode);

	if (utf16 != 0) {
		switch (codepoint_len) {
			case 2: *(uint16_t *)(utf16) = (uint16_t)(unicode); break;
			case 4: {
				uint16_t c0 = 0, c1 = 0;
				b4_utf16(unicode, &c0, &c1);
				*(uint16_t *)(utf16) = c0;
				*(uint16_t *)(utf16 + 2) = c1;
				break;
			}
			default: return 0; /* abort */
		}
	}

	return utf16 + codepoint_len;
}

#endif /* NU_WITH_UTF16HE_WRITER */
