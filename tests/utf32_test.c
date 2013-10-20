#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf32_read_bom() {
	nu_utf32_bom_t bom = { 0 };

	assert(nu_utf32_read_bom("\xFF\xFE\x00\x00" /* LE */, &bom));
	assert(bom.write_bom == nu_utf32le_write_bom);
	assert(bom.read == nu_utf32le_read);
	assert(bom.write == nu_utf32le_write);
	assert(bom.revread == nu_utf32le_revread);
	assert(bom.validread == nu_utf32le_validread);
	
	assert(nu_utf32_read_bom("\x00\x00\xFE\xFF" /* BE */, &bom));
	assert(bom.write_bom == nu_utf32be_write_bom);
	assert(bom.read == nu_utf32be_read);
	assert(bom.write == nu_utf32be_write);
	assert(bom.revread == nu_utf32be_revread);
	assert(bom.validread == nu_utf32be_validread);
}

void test_utf32_read_invalid_bom() {
	nu_utf32_bom_t bom = { 0 };

	assert(nu_utf32_read_bom("\xFF\xFF\x00\x00", &bom) == 0);
	assert(bom.write_bom == 0);
	assert(bom.read == 0);
	assert(bom.write == 0);
	assert(bom.revread == 0);
	assert(bom.validread == 0);
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
