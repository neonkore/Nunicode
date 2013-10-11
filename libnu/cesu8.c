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
