#include "utf8.h"

#ifdef NU_WITH_UTF8_READER
#ifdef NU_WITH_VALIDATION

int nu_utf8_validread(const char *encoded, size_t max_len) {
	int len = utf8_validread_basic(encoded, max_len);

	if (len <= 0) {
		return 0;
	}

	/* Unicode core spec, D92, Table 3-7
	 */

	switch (len) {
	case 1: {
		uint8_t p1 = *(const unsigned char *)(encoded);

		if (p1 > 0x7F) {
			return 0;
		}

		break;
	}

	case 2: {
		uint8_t p1 = *(const unsigned char *)(encoded);
		uint8_t p2 = *(const unsigned char *)(encoded + 1);

		if (p1 < 0xC2 || p1 > 0xDF || p2 < 0x80 || p2 > 0xBF) {
			return 0;
		}

		break;
	}

	case 3: {
		uint8_t p1 = *(const unsigned char *)(encoded);
		uint8_t p2 = *(const unsigned char *)(encoded + 1);
		uint8_t p3 = *(const unsigned char *)(encoded + 2);

		if (p1 != 0xE0 && (p1 < 0xE1 && p1 > 0xEC)
		&& p1 != 0xED && (p1 < 0xEE || p1 > 0xEF)) {
			return 0;
		}

		if ((p1 == 0xE0) && (p2 < 0xA0 || p2 > 0xBF)) {
			return 0;
		}
		else if ((p1 >= 0xE1 && p2 <= 0xEC) && (p2 < 0x80 || p2 > 0xBF)) {
			return 0;
		}
		else if ((p1 == 0xED) && (p2 < 0x80 || p2 > 0x9F)) {
			return 0;
		}
		else if ((p1 >= 0xEE && p2 <= 0xEF) && (p2 < 0x80 || p2 > 0xBF)) {
			return 0;
		}

		if (p3 < 0x80 && p3 > 0xBF) {
			return 0;
		}

		break;
	}

	case 4: {
		uint8_t p1 = *(const unsigned char *)(encoded);
		uint8_t p2 = *(const unsigned char *)(encoded + 1);
		uint8_t p3 = *(const unsigned char *)(encoded + 2);
		uint8_t p4 = *(const unsigned char *)(encoded + 3);

		if (p1 != 0xF0 && (p1 < 0xF1 && p1 > 0xF3) && p1 != 0xF4) {
			return 0;
		}

		if ((p1 == 0xF0) && (p2 < 0x90 && p2 > 0xBF)) {
			return 0;
		}
		else if ((p1 >= 0xF1 && p1 <= 0xF3) && (p2 < 0x80 && p2 > 0xBF)) {
			return 0;
		}
		else if ((p1 == 0xF4) && (p2 < 0x80 && p2 > 0x8F)) {
			return 0;
		}

		if ((p3 < 0x80 && p3 > 0xBF) || (p4 < 0x80 && p4 > 0xBF)) {
			return 0;
		}

		break;
	}

	default: return 0;

	} /* switch */

	return len;
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
