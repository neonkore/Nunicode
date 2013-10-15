#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf16_read_bom() {
	nu_utf16_write_bom_t write_bom = 0;
	nu_read_iterator_t read = 0;
	nu_write_iterator_t write = 0;
	nu_revread_iterator_t revread = 0;

	assert(nu_utf16_read_bom("\xFF\xFE\x67\x00" /* g, LE */, &write_bom, &read, &write, &revread));
	assert(write_bom == nu_utf16le_write_bom);
	assert(read == nu_utf16le_read);
	assert(write == nu_utf16le_write);
	assert(revread == nu_utf16le_revread);
	
	assert(nu_utf16_read_bom("\xFE\xFF\x00\x67" /* g, BE */, &write_bom, &read, &write, &revread));
	assert(write_bom == nu_utf16be_write_bom);
	assert(read == nu_utf16be_read);
	assert(write == nu_utf16be_write);
	assert(revread == nu_utf16be_revread);
}

void test_utf16_read_invalid_bom() {
	nu_utf16_write_bom_t write_bom = 0;
	nu_read_iterator_t read = 0;
	nu_write_iterator_t write = 0;
	nu_revread_iterator_t revread = 0;

	assert(nu_utf16_read_bom("\xFF\xFF\x00\x67", &write_bom, &read, &write, &revread) == 0);
	assert(write_bom == 0);
	assert(read == 0);
	assert(write == 0);
	assert(revread == 0);
}

void test_utf16_write_bom() {
	char bom[2] = { 0 };

	assert(nu_utf16le_write_bom(bom) && (unsigned char)(bom[0]) == 0xFF && (unsigned char)(bom[1]) == 0xFE);
	assert(nu_utf16be_write_bom(bom) && (unsigned char)(bom[0]) == 0xFE && (unsigned char)(bom[1]) == 0xFF);
}
