
#include "utf8.h"

#ifdef NU_WITH_UTF8_READER

static inline unsigned utf8_char_length(const char c) {
	if ((c & 0x80) == 0) return 1;
	if ((c & 0xE0) == 0xC0) return 2;
	if ((c & 0xF0) == 0xE0) return 3;
	if ((c & 0xF8) == 0xF0) return 4;

	return 0; /* undefined */
}

static inline void utf8_2b(const char *p, uint32_t *codepoint) {
	/* UTF-8: 110xxxxx 10xxxxxx
	 *                                    |__ 1st unicode octet
	 * 110xxx00 << 6 -> 00000xxx 00000000 |
	 *                  --------
	 * 110000xx << 6 -> 00000xxx xx000000 |__ 2nd unicode octet
	 * 10xxxxxx      -> 00000xxx xxxxxxxx |
	 *                           --------  */
	*codepoint = 
	(unsigned)(*p & 0x1C) << 6
	| ((*p & 0x03) << 6 | (*(p + 1) & 0x3F));
}

static inline void utf8_3b(const char *p, uint32_t *codepoint) {
	/* UTF-8: 1110xxxx 10xxxxxx 10xxxxxx
	 *
	 * 1110xxxx << 12 -> xxxx0000 0000000 |__ 1st unicode octet
	 * 10xxxx00 << 6  -> xxxxxxxx 0000000 |
	 *                   --------
	 * 100000xx << 6  -> xxxxxxxx xx00000 |__ 2nd unicode octet
	 * 10xxxxxx       -> xxxxxxxx xxxxxxx |
	 *                            -------  */
	*codepoint =
	((unsigned)(*p & 0x0F) << 12 | (unsigned)(*(p + 1) & 0x3C) << 6)
	| ((*(p + 1) & 0x03) << 6 | (*(p + 2) & 0x3F));
}

static inline void utf8_4b(const char *p, uint32_t *codepoint) {
	/* UTF-8: 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
	 *
	 * 11110xxx << 18 -> 00xxx00 00000000 00000000 |__ 1st unicode octet
	 * 10xx0000 << 12 -> 00xxxxx 00000000 00000000 |
	 *                   -------
	 * 1000xxxx << 12 -> 00xxxxx xxxx0000 00000000 |__ 2nd unicode octet
	 * 10xxxx00 << 6  -> 00xxxxx xxxxxxxx 00000000 |
	 *                           --------
	 * 100000xx << 6  -> 00xxxxx xxxxxxxx xx000000 |__ 3rd unicode octet
	 * 10xxxxxx       -> 00xxxxx xxxxxxxx xxxxxxxx |
	 *                                    ---------  */
 	*codepoint = 
	((unsigned)(*p & 0x07) << 18 | (unsigned)(*(p + 1) & 0x30) << 12)
	| ((unsigned)(*(p + 1) & 0x0F) << 12 | (unsigned)(*(p + 2) & 0x3C) << 6)
	| ((*(p + 2) & 0x03) << 6 | (*(p + 3) & 0x3F));
}

#endif /* NU_WITH_UTF8_READER */

#ifdef NU_WITH_UTF8_WRITER

static inline unsigned utf8_codepoint_length(uint32_t codepoint) {
	if (codepoint < 128) return 1;
	if (codepoint < 0x0800) return 2;
	if (codepoint < 0x10000) return 3;
	if (codepoint < 0x200000) return 4;

	return 0; /* undefined */
}

static inline void b2_utf8(uint32_t codepoint, char *utf8) {
	/* UNICODE: 00000xxx xxxxxxxx
	 *
	 * 00000xxx >> 6 -> 110xxx00 10000000 |__ 1st UTF-8 octet
	 * xxxxxxxx >> 6 -> 110xxxxx 10000000 |
	 *                  --------
	 *                                    |__ 2nd UTF-8 octet
	 * xxxxxxxx      -> 110xxxxx 10xxxxxx |
	 *                           --------  */
	*utf8 = (0xC0 | (codepoint & 0xFF00) >> 6 | (codepoint & 0xFF) >> 6);
	*(utf8 + 1) = (0x80 | (codepoint & 0x3F));
}

static inline void b3_utf8(uint32_t codepoint, char *utf8) {
	/* UNICODE: xxxxxxxx xxxxxxxx
	 *                                              |__ 1st UTF-8 octet
	 * xxxxxxxx >> 12 -> 1110xxxx 10000000 10000000 |
	 *                   --------
	 * xxxxxxxx >> 6  -> 1110xxxx 10xxxx00 10000000 |__ 2nd UTF-8 octet
	 * xxxxxxxx >> 6  -> 1110xxxx 10xxxxxx 10000000 |
	 *                            --------
	 *                                              |__ 3rd UTF-8 octet
	 * xxxxxxxx       -> 1110xxxx 10xxxxxx 10xxxxxx |
	 *                                     --------  */
	*utf8 = (0xE0 | (codepoint & 0xF000) >> 12);
	*(utf8 + 1) = (0x80 | (codepoint & 0x0F00) >> 6 | (codepoint & 0xC0) >> 6);
	*(utf8 + 2) = (0x80 | (codepoint & 0x3F));
}

static inline void b4_utf8(uint32_t codepoint, char *utf8) {
	/* UNICODE: 000xxxxx xxxxxxxx xxxxxxxx
	 *                                                      |__ 1st UTF-8 octet
	 * 000xxxxx >> 18 -> 11110xxx 1000000 10000000 10000000 |
	 *                   --------
	 * 000xxxxx >> 12 -> 11110xxx 10xx000 10000000 10000000 |__ 2nd UTF-8 octet
	 * xxxxxxxx >> 12 -> 11110xxx 10xxxxx 10000000 10000000 |
	 *                            -------
	 * xxxxxxxx >> 6  -> 11110xxx 10xxxxx 10xxxxx0 10000000 |__ 3rd UTF-8 octet
	 * xxxxxxxx >> 6  -> 11110xxx 10xxxxx 10xxxxxx 10000000 |
	 *                                    --------
	 *                                                      |__ 4th UTF-8 octet
	 * xxxxxxxx       -> 11110xxx 10xxxxx 10xxxxxx 10000000 | */
	*(unsigned char *)(utf8) = (0xF0 | ((codepoint & 0x1C0000) >> 18));
	*(utf8 + 1) = (0x80 | (codepoint & 0x030000) >> 12 | (codepoint & 0x00E000) >> 12);
	*(utf8 + 2) = (0x80 | (codepoint & 0x001F00) >> 6 | (codepoint & 0x0000E0) >> 6);
	*(utf8 + 3) = (0x80 | (codepoint & 0x3F));
}

#endif /* NU_WITH_UTF8_WRITER */

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

	if (len < 1) return 0; /* abort */

	if (unicode != 0) {
		switch (len) {
		case 1: *unicode = *utf8; break;
		case 2: utf8_2b(utf8, unicode); break;
		case 3: utf8_3b(utf8, unicode); break;
		case 4: utf8_4b(utf8, unicode); break;
		default: return 0; /* what year are you from? */
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

	switch (codepoint_len) {
		case 1: *utf8 = (char)(unicode); break;
		case 2: b2_utf8(unicode, utf8); break;
		case 3: b3_utf8(unicode, utf8); break;
		case 4: b4_utf8(unicode, utf8); break;
		default: return 0;
	}

	return utf8 + codepoint_len;
}

#endif /* NU_WITH_UTF8_WRITER */
