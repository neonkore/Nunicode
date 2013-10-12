#include "cesu8.h"
#include "cesu8_internal.h"
#include "utf8_internal.h"

#ifdef NU_WITH_CESU8_READER

const char* nu_cesu8_read(const char *cesu8, uint32_t *unicode) {
	unsigned len = cesu8_char_length(*cesu8);

	if (unicode) {
		switch (len) {
		case 1: *unicode = *cesu8; break;
		case 2: utf8_2b(cesu8, unicode); break;
		case 3: utf8_3b(cesu8, unicode); break;
		case 6: cesu8_6b(cesu8, unicode); break;
		default: return 0; /* abort */
		}
	}

	return cesu8 + len;
}

#ifdef NU_WITH_REVERSE_READ

const char* nu_cesu8_revread(uint32_t *unicode, const char *cesu8) {
	/** valid CESU-8 has either 10xxxxxx (continuation byte)
	 * or beginning of byte sequence 
	 * 
	 * one exception is 11101101 followed by 1011xxxx which is 
	 * trail surrogate of 6-byte sequence.
	 */
	const char *p = cesu8 - 1;
	while ((*p & 0xC0) == 0x80) { /* skip every 0b10000000 */
		--p;
	}

	if ((unsigned char)(*p) == 0xED 
	&& (*(p + 1) & 0xF0) == 0xB0) { /* trail surrogate */
		p -= 3;
	}

	if (unicode != 0) {
		nu_cesu8_read(p, unicode);
	}

	return p;
}

#endif /* NU_WITH_REVERSE_READ */
#endif /* NU_WITH_CESU8_READER */

#ifdef NU_WITH_CESU8_WRITER

char* nu_cesu8_write(uint32_t unicode, char *cesu8) {
	unsigned codepoint_len = cesu8_codepoint_length(unicode);

	if (cesu8 != 0) {
		switch (codepoint_len) {
		case 1: *cesu8 = (char)(unicode); break;
		case 2: b2_utf8(unicode, cesu8); break;
		case 3: b3_utf8(unicode, cesu8); break;
		case 6: b6_cesu8(unicode, cesu8); break;
		default: return 0; /* abort */
		}
	}

	return cesu8 + codepoint_len;
}

#endif /* NU_WITH_CESU8_WRITER */
