#include "utf8.h"
#include "utf8_internal.h"

#ifdef NU_WITH_UTF8_READER

ssize_t nu_utf8_strlen(const char *utf8, size_t utf8_size) {
	unsigned len = 0;

	const char *p = utf8;
	while (p < utf8 + utf8_size) {
		++len;
		unsigned char_len = utf8_char_length(*p);
		if (char_len < 1) return -len; /* abort */
		p += char_len;
	}

	return len;
}

const char* nu_utf8_read(const char *utf8, uint32_t *unicode) {
	unsigned len = utf8_char_length(*utf8);

	if (unicode != 0) {
		switch (len) {
		case 1: *unicode = *utf8; break;
		case 2: utf8_2b(utf8, unicode); break;
		case 3: utf8_3b(utf8, unicode); break;
		case 4: utf8_4b(utf8, unicode); break;
		default: return 0; /* abort */
		}
	}

	return utf8 + len;
}

#endif /* NU_WITH_UTF8_READER */

#ifdef NU_WITH_UTF8_WRITER

ssize_t nu_utf8_bytelen(const uint32_t *unicode, size_t unicode_size) {
	ssize_t len = 0;
	size_t i = 0; for (; i < unicode_size; ++i) {
		unsigned byte_len = utf8_codepoint_length(unicode[i]);
		if (byte_len < 1) return -i;
		len += byte_len;
	}
	return len;
}

char* nu_utf8_write(uint32_t unicode, char *utf8) {
	unsigned codepoint_len = utf8_codepoint_length(unicode);

	if (utf8 != 0) {
		switch (codepoint_len) {
			case 1: *utf8 = (char)(unicode); break;
			case 2: b2_utf8(unicode, utf8); break;
			case 3: b3_utf8(unicode, utf8); break;
			case 4: b4_utf8(unicode, utf8); break;
			default: return 0; /* abort */
		}
	}

	return utf8 + codepoint_len;
}

#endif /* NU_WITH_UTF8_WRITER */
