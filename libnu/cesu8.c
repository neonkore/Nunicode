#include "cesu8.h"
#include "cesu8_internal.h"
#include "utf8_internal.h"

#ifdef NU_WITH_CESU8_READER

const char* nu_cesu8_read(const char *cesu8, uint32_t *unicode) {
	uint32_t c = *(unsigned char *)(cesu8);

	if (c == 0xED) { /* 6-bytes sequence */
		if (unicode != 0) {
			cesu8_6b(cesu8, unicode);
		}
		return cesu8 + 6;
	}
	else if (c >= 0x80) {
		if (c < 0xE0) {
			if (unicode != 0) {
				utf8_2b(cesu8, unicode);
			}
			return cesu8 + 2;
		}
		else {
			if (unicode != 0) {
				utf8_3b(cesu8, unicode);
			}
			return cesu8 + 3;
		}
	}
	else if (unicode != 0) {
		*unicode = c;
	}

	return cesu8 + 1;
}

#ifdef NU_WITH_REVERSE_READ

const char* nu_cesu8_revread(uint32_t *unicode, const char *cesu8) {
	/* valid CESU-8 has either 10xxxxxx (continuation byte)
	 * or beginning of byte sequence
	 *
	 * one exception is 11101101 followed by 1011xxxx which is
	 * trail surrogate of 6-byte sequence.
	 */
	const char *p = cesu8 - 1;
	while (((unsigned char)(*p) & 0xC0) == 0x80) { /* skip every 0b10000000 */
		--p;
	}

	if ((unsigned char)(*p) == 0xED
	&& ((unsigned char)*(p + 1) & 0xF0) == 0xB0) { /* trail surrogate */
		p -= 3;
	}

	if (unicode != 0) {
		nu_cesu8_read(p, unicode);
	}

	return p;
}

#endif /* NU_WITH_REVERSE_READ */

#ifdef NU_WITH_VALIDATION

int nu_cesu8_validread(const char *encoded, size_t max_len) {
	const unsigned char *up = (const unsigned char *)(encoded);

	/* i guess there is no way to detect misplaceed CESU-8
	 * trail surrogate alone, it will produce valid UTF-8 sequence
	 * greater than U+10000 */

	/* 6-bytes sequence
	 *
	 * 11101101 followed by 1010xxxx should be
	 * then followed by xxxxxxxx 11101101 1011xxxx xxxxxxxx */
	if (*(up) == 0xED && (*(up + 1) & 0xF0) == 0xA0) {
		if (max_len < 6) {
			return 0;
		}

		if (*(up + 3) != 0xED || (*(up + 4) & 0xF0) != 0xB0) {
			return 0;
		}

		return 6;
	}

	return utf8_validread(encoded, max_len);
}

#endif /* NU_WITH_VALIDATION */
#endif /* NU_WITH_CESU8_READER */

#ifdef NU_WITH_CESU8_WRITER

char* nu_cesu8_write(uint32_t unicode, char *cesu8) {
	unsigned codepoint_len = cesu8_codepoint_length(unicode);

	if (cesu8 != 0) {
		switch (codepoint_len) {
		case 1: *cesu8 = (char)(unicode); break;
		case 2: b2_utf8(unicode, cesu8); break;
		case 3: b3_utf8(unicode, cesu8); break;
		default: b6_cesu8(unicode, cesu8); break; /* len == 6 */
		}
	}

	return cesu8 + codepoint_len;
}

#endif /* NU_WITH_CESU8_WRITER */
