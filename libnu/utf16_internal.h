#ifndef NU_UTF16_INTERNAL_H
#define NU_UTF16_INTERNAL_H

static inline uint16_t nu_letohs(const char *p) {
	const unsigned char *up = (const unsigned char *)(p);
	return (*(up + 1) << 8 | *(up));
}

static inline void nu_htoles(uint16_t s, char *p) {
	unsigned char *up = (unsigned char *)(p);
	*(up) = (s & 0xFF);
	*(up + 1) = ((s & 0xFF00) >> 8);
}

static inline uint16_t nu_betohs(const char *p) {
	const unsigned char *up = (const unsigned char *)(p);
	return (*(up) << 8 | *(up + 1));
}

static inline void nu_htobes(uint16_t s, char *p) {
	unsigned char *up = (unsigned char *)(p);
	*(up + 1) = (s & 0xFF);
	*(up) = ((s & 0xFF00) >> 8);
}

static inline unsigned utf16_char_length(uint16_t c) {
	if (c >= 0xD800 && c <= 0xDBFF) {
		return 4;
	}

	return 2;
}

static inline void utf16_4b(uint16_t lead, uint16_t trail, uint32_t *codepoint) {
	/** UTF-16: 110110xx xxxxxxxx 110111yy yyyyyyyy
	 *
	 * 110110xx xxxxxxxx << 10 -> 00000000 0000xxxx xxxxxx00 00000000 |__ lead
	 *                                         -----------            |
	 * 110111yy yyyyyyyy       -> 00000000 0000xxxx xxxxxxyy yyyyyyyy |__ trail
	 *                                                    ----------- |
	 *                                                                  */
	*codepoint = ((lead & 0x03FF) << 10 | (trail & 0x03FF)) + 0x10000;
}

static inline unsigned utf16_codepoint_length(uint32_t codepoint) {
	if (codepoint >= 0x10000) {
		return 4;
	}
	return 2;
}

static inline void b4_utf16(uint32_t codepoint, uint16_t *lead, uint16_t *trail) {
	/** UNICODE: 00000000 0000xxxx xxxxxxyy yyyyyyyy
	 *
	 * 0000xxxx xxxxxxyy >> 10 -> 110110xx xxxxxxxx |__ lead
	 *                                              |
	 * xxxxxxyy yyyyyyyy       -> 110111yy yyyyyyyy |__ trail
	 *                                              |
	 *                                                */
	 *lead = 0xD800 | ((codepoint - 0x10000) & 0x000FFC00) >> 10;
	 *trail = 0xDC00 | (codepoint & 0x03FF);
}

#endif /* NU_UTF16_INTERNAL_H */
