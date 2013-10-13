#include "utf32.h"
#include "utf32be.h"
#include "utf32le.h"

#ifdef NU_WITH_UTF32_READER

const char* nu_utf32_read_bom(const char *encoded, nu_utf32_write_bom_t *bom, 
	nu_read_iterator_t *rd, nu_write_iterator_t *wr,
	nu_revread_iterator_t *revrd) {
	unsigned char bom0 = *(unsigned char *)(encoded);
	unsigned char bom1 = *(unsigned char *)(encoded + 1);
	unsigned char bom2 = *(unsigned char *)(encoded + 2);
	unsigned char bom3 = *(unsigned char *)(encoded + 3);

	if (bom0 == 0xFF && bom1 == 0xFE
	&& bom2 == 0 && bom3 == 0) {
#ifdef NU_WITH_UTF32_WRITER
		if (bom != 0) {
			*bom = nu_utf32le_write_bom;
		}
#endif
		if (rd != 0) {
			*rd = nu_utf32le_read;
		}
		if (wr != 0) {
			*wr = nu_utf32le_write;
		}
#ifdef NU_WITH_REVERSE_READ
		if (revrd != 0) {
			*revrd = nu_utf32le_revread;
		}
#endif
	}
	else if (bom0 == 0 && bom1 == 0
	&& bom2 == 0xFE && bom3 == 0xFF) {
#ifdef NU_WITH_UTF32_WRITER
		if (bom != 0) {
			*bom = nu_utf32be_write_bom;
		}
#endif
		if (rd != 0) {
			*rd = nu_utf32be_read;
		}
		if (wr != 0) {
			*wr = nu_utf32be_write;
		}
#ifdef NU_WITH_REVERSE_READ
		if (revrd != 0) {
			*revrd = nu_utf32be_revread;
		}
#endif
	}
	else {
		return 0;
	}

	return encoded + 4;
}

#endif /* NU_WITH_UTF32_READER */

#ifdef NU_WITH_UTF32_WRITER

char* nu_utf32le_write_bom(char *encoded) {
	unsigned char *p = (unsigned char *)(encoded);

	*(p)     = 0xFF;
	*(p + 1) = 0xFE;
	*(p + 2) = 0;
	*(p + 3) = 0;

	return encoded + 4;
}

char* nu_utf32be_write_bom(char *encoded) {
	unsigned char *p = (unsigned char *)(encoded);

	*(p)     = 0;
	*(p + 1) = 0;
	*(p + 2) = 0xFE;
	*(p + 3) = 0xFF;

	return encoded + 4;
}

#endif /* NU_WITH_UTF32_WRITER */
