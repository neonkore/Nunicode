#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf16_read_bom() {
	nu_utf16_bom_t bom;
	memset(&bom, 0, sizeof(bom));

	uint32_t u1 = 0, u2 = 0;

	const char *le_bom = "\xFF\xFE\x67\x00";
	const char *be_bom = "\xFE\xFF\x00\x67";

	/* skip output */
	assert(nu_utf16_read_bom(le_bom, 0) == le_bom + 2);
	assert(nu_utf16_read_bom(be_bom, 0) == be_bom + 2);

	assert(nu_utf16_read_bom(le_bom, &bom) == le_bom + 2);
	assert(bom.write_bom == nu_utf16le_write_bom);
	assert(bom.write == nu_utf16le_write);
	assert(bom.validread == nu_utf16le_validread);
	assert(bom.read("\x00\x01", &u1) && nu_utf16le_read("\x00\x01", &u2) && u1 == u2);
	assert(bom.revread(&u1, "\x00\x01" + 2) && nu_utf16le_revread(&u2, "\x00\x01" + 2) && u1 == u2);

	assert(nu_utf16_read_bom(be_bom, &bom) == be_bom + 2);
	assert(bom.write_bom == nu_utf16be_write_bom);
	assert(bom.write == nu_utf16be_write);
	assert(bom.validread == nu_utf16be_validread);
	assert(bom.read("\x00\x01", &u1) && nu_utf16be_read("\x00\x01", &u2) && u1 == u2);
	assert(bom.revread(&u1, "\x00\x01" + 2) && nu_utf16be_revread(&u2, "\x00\x01" + 2) && u1 == u2);
}

void test_utf16_read_invalid_bom() { /* defaults to BE */
	nu_utf16_bom_t bom;
	memset(&bom, 0, sizeof(bom));

	uint32_t u1 = 0, u2 = 0;

	const char *inval_bom1 = "\xFF\x00";
	const char *inval_bom2 = "\xFE\x00";

	/* skip output */
	assert(nu_utf16_read_bom(inval_bom1, 0) == inval_bom1);
	assert(nu_utf16_read_bom(inval_bom2, 0) == inval_bom2);

	assert(nu_utf16_read_bom(inval_bom1, &bom) == inval_bom1);
	assert(bom.write_bom == nu_utf16be_write_bom);
	assert(bom.write == nu_utf16be_write);
	assert(bom.validread == nu_utf16be_validread);
	assert(bom.read("\x00\x01", &u1) && nu_utf16be_read("\x00\x01", &u2) && u1 == u2);
	assert(bom.revread(&u1, "\x00\x01" + 2) && nu_utf16be_revread(&u2, "\x00\x01" + 2) && u1 == u2);

	assert(nu_utf16_read_bom(inval_bom2, &bom) == inval_bom2);
	assert(bom.write_bom == nu_utf16be_write_bom);
	assert(bom.write == nu_utf16be_write);
	assert(bom.validread == nu_utf16be_validread);
	assert(bom.read("\x00\x01", &u1) && nu_utf16be_read("\x00\x01", &u2) && u1 == u2);
	assert(bom.revread(&u1, "\x00\x01" + 2) && nu_utf16be_revread(&u2, "\x00\x01" + 2) && u1 == u2);
}

void test_utf16_write_bom() {
	char bom[2] = { 0 };

	assert(nu_utf16le_write_bom(bom) && (unsigned char)(bom[0]) == 0xFF && (unsigned char)(bom[1]) == 0xFE);
	assert(nu_utf16be_write_bom(bom) && (unsigned char)(bom[0]) == 0xFE && (unsigned char)(bom[1]) == 0xFF);
}
