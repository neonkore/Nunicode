#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf16_read_bom() {
	nu_utf16_bom_t bom;
	memset(&bom, 0, sizeof(bom));

	const char *le_bom = "\xFF\xFE\x67\x00";
	const char *be_bom = "\xFE\xFF\x00\x67";

	assert(nu_utf16_read_bom(le_bom, &bom) == le_bom + 2);
	assert(bom.write_bom == nu_utf16le_write_bom);
	assert(bom.read == nu_utf16le_read);
	assert(bom.write == nu_utf16le_write);
	assert(bom.revread == nu_utf16le_revread);
	assert(bom.validread == nu_utf16le_validread);

	assert(nu_utf16_read_bom(be_bom, &bom) == be_bom + 2);
	assert(bom.write_bom == nu_utf16be_write_bom);
	assert(bom.read == nu_utf16be_read);
	assert(bom.write == nu_utf16be_write);
	assert(bom.revread == nu_utf16be_revread);
	assert(bom.validread == nu_utf16be_validread);
}

void test_utf16_read_invalid_bom() { /* defaults to BE */
	nu_utf16_bom_t bom;
	memset(&bom, 0, sizeof(bom));

	const char *inval_bom = "\xFF\xFF\x00\x67";

	assert(nu_utf16_read_bom(inval_bom, &bom) == inval_bom);
	assert(bom.write_bom == nu_utf16be_write_bom);
	assert(bom.read == nu_utf16be_read);
	assert(bom.write == nu_utf16be_write);
	assert(bom.revread == nu_utf16be_revread);
	assert(bom.validread == nu_utf16be_validread);
}

void test_utf16_write_bom() {
	char bom[2] = { 0 };

	assert(nu_utf16le_write_bom(bom) && (unsigned char)(bom[0]) == 0xFF && (unsigned char)(bom[1]) == 0xFE);
	assert(nu_utf16be_write_bom(bom) && (unsigned char)(bom[0]) == 0xFE && (unsigned char)(bom[1]) == 0xFF);
}
