#include "utf16.h"
#include "utf16be.h"
#include "utf16le.h"

#ifdef NU_WITH_UTF16_READER

const char* nu_utf16_read_bom(const char *encoded, nu_utf16_write_bom_t *bom, 
	nu_read_iterator_t *rd, nu_write_iterator_t *wr) {
	unsigned char bom0 = *(unsigned char *)(encoded);
	unsigned char bom1 = *(unsigned char *)(encoded + 1);

	if (bom0 == 0xFF && bom1 == 0xFE) {
		if (rd != 0) {
			*rd = nu_utf16le_read;
		}
		if (wr != 0) {
			*wr = nu_utf16le_write;
		}
#ifdef NU_WITH_UTF16_WRITER
		if (bom != 0) {
			*bom = nu_utf16le_write_bom;
		}
#endif
	}
	else if (bom0 == 0xFE && bom1 == 0xFF) {
		if (rd != 0) {
			*rd = nu_utf16be_read;
		}
		if (wr != 0) {
			*wr = nu_utf16be_write;
		}
#ifdef NU_WITH_UTF16_WRITER
		if (bom != 0) {
			*bom = nu_utf16be_write_bom;
		}
#endif
	}
	else {
		return 0;
	}

	return encoded + 2;
}

#endif /* NU_WITH_UTF16_READER */

#ifdef NU_WITH_UTF16_WRITER

char* nu_utf16le_write_bom(char *encoded) {
	*(unsigned char *)(encoded) = 0xFF;
	*(unsigned char *)(encoded + 1) = 0xFE;

	return encoded + 2;
}

char* nu_utf16be_write_bom(char *encoded) {
	*(unsigned char *)(encoded) = 0xFE;
	*(unsigned char *)(encoded + 1) = 0xFF;

	return encoded + 2;
}

#endif /* NU_WITH_UTF16_WRITER */
