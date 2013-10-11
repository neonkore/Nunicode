#include "cesu8.h"
#include "cesu8_internal.h"
#include "utf8_internal.h"

#ifdef NU_WITH_CESU8_READER

ssize_t nu_cesu8_strlen(const char *cesu8, size_t cesu8_size) {
	unsigned len = 0;

	const char *p = cesu8;
	while (p < cesu8 + cesu8_size) {
		++len;
		unsigned char_len = cesu8_char_length(*p);
		if (char_len < 1) return -len; /* abort */
		p += char_len;
	}

	return len;
}

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

ssize_t nu_cesu8_bytelen(const uint32_t *unicode, size_t unicode_size) {
	ssize_t len = 0;

	for (size_t i = 0; i < unicode_size; ++i) {
		unsigned byte_len = cesu8_codepoint_length(unicode[i]);
		if (byte_len < 1) return -i;
		len += byte_len;
	}

	return len;
}

char* nu_cesu8_write(uint32_t unicode, char *cesu8) {
	unsigned codepoint_len = cesu8_codepoint_length(unicode);

	switch (codepoint_len) {
	case 1: *cesu8 = (char)(unicode); break;
	case 2: b2_utf8(unicode, cesu8); break;
	case 3: b3_utf8(unicode, cesu8); break;
	case 6: b6_cesu8(unicode, cesu8); break;
	default: return 0; /* abort */
	}

	return cesu8 + codepoint_len;
}

#endif /* NU_WITH_CESU8_WRITER */
