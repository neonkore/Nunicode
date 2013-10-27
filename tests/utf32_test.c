#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf32_read_bom() {
	nu_utf32_bom_t bom;
	memset(&bom, 0, sizeof(bom));

	const char *le_bom = "\xFF\xFE\x00\x00";
	const char *be_bom = "\x00\x00\xFE\xFF";

	assert(nu_utf32_read_bom(le_bom, &bom) == le_bom + 4);
	assert(bom.write_bom == nu_utf32le_write_bom);
	assert(bom.read == nu_utf32le_read);
	assert(bom.write == nu_utf32le_write);
	assert(bom.revread == nu_utf32le_revread);
	assert(bom.validread == nu_utf32le_validread);

	assert(nu_utf32_read_bom(be_bom, &bom) == be_bom + 4);
	assert(bom.write_bom == nu_utf32be_write_bom);
	assert(bom.read == nu_utf32be_read);
	assert(bom.write == nu_utf32be_write);
	assert(bom.revread == nu_utf32be_revread);
	assert(bom.validread == nu_utf32be_validread);
}

void test_utf32_read_invalid_bom() { /* defaults to BE */
	nu_utf32_bom_t bom;
	memset(&bom, 0, sizeof(bom));

	const char *inval_bom = "\xFF\xFF\x00\x00";

	assert(nu_utf32_read_bom(inval_bom, &bom) == inval_bom);
	assert(bom.write_bom == nu_utf32be_write_bom);
	assert(bom.read == nu_utf32be_read);
	assert(bom.write == nu_utf32be_write);
	assert(bom.revread == nu_utf32be_revread);
	assert(bom.validread == nu_utf32be_validread);
}

void test_utf32_write_bom() {
	char bom[4] = { 0 };

	assert(nu_utf32le_write_bom(bom)
		&& (unsigned char)(bom[0]) == 0xFF && (unsigned char)(bom[1]) == 0xFE
		&& bom[2] == 0 && bom[3] == 0);
	assert(nu_utf32be_write_bom(bom)
		&& bom[0] == 0 && bom[1] == 0
		&& (unsigned char)(bom[2]) == 0xFE && (unsigned char)(bom[3]) == 0xFF);
}
