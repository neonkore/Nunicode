#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf32_read_bom() {
	nu_utf32_write_bom_t write_bom = 0;
	nu_read_iterator_t read = 0;
	nu_write_iterator_t write = 0;
	nu_revread_iterator_t revread = 0;

	assert(nu_utf32_read_bom("\xFF\xFE\x00\x00" /* LE */, &write_bom, &read, &write, &revread));
	assert(write_bom == nu_utf32le_write_bom);
	assert(read == nu_utf32le_read);
	assert(write == nu_utf32le_write);
	assert(revread == nu_utf32le_revread);
	
	assert(nu_utf32_read_bom("\x00\x00\xFE\xFF" /* BE */, &write_bom, &read, &write, &revread));
	assert(write_bom == nu_utf32be_write_bom);
	assert(read == nu_utf32be_read);
	assert(write == nu_utf32be_write);
	assert(revread == nu_utf32be_revread);
}

void test_utf32_read_invalid_bom() {
	nu_utf32_write_bom_t write_bom = 0;
	nu_read_iterator_t read = 0;
	nu_write_iterator_t write = 0;
	nu_revread_iterator_t revread = 0;

	assert(nu_utf32_read_bom("\xFF\xFF\x00\x00", &write_bom, &read, &write, &revread) == 0);
	assert(write_bom == 0);
	assert(read == 0);
	assert(write == 0);
	assert(revread == 0);
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
