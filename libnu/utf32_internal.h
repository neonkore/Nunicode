#ifndef NU_UTF32_INTERNAL_H
#define NU_UTF32_INTERNAL_H

static inline uint32_t nu_letohl(const char *p) {
	const unsigned char *up = (const unsigned char *)(p);
	return (*(up + 3) << 24 | *(up + 2) << 16 | *(up + 1) << 8 | *(up));
}

static inline void nu_htolel(uint32_t s, char *p) {
	unsigned char *up = (unsigned char *)(p);
	*(up) = (s & 0xFF);
	*(up + 1) = ((s & 0xFF00) >> 8);
	*(up + 2) = ((s & 0xFF0000) >> 16);
	*(up + 3) = ((s & 0xFF000000) >> 24);
}

static inline uint32_t nu_betohl(const char *p) {
	const unsigned char *up = (const unsigned char *)(p);
	return (*(up) << 24 | *(up + 1) << 16 | *(up + 2) << 8 | *(up + 3));
}

static inline void nu_htobel(uint32_t s, char *p) {
	unsigned char *up = (unsigned char *)(p);
	*(up + 3) = (s & 0xFF);
	*(up + 2) = (s & 0xFF00) >> 8;
	*(up + 1) = (s & 0xFF0000) >> 16;
	*(up) = (s & 0xFF000000) >> 24;
}

#endif /* NU_UTF32_INTERNAL_H */
