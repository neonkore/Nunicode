#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

#ifdef NU_WITH_UTF32_READER

void test_utf32_read_bom() {
	nu_utf32_write_bom_t write_bom = 0;
	nu_read_iterator_t read = 0;
	nu_write_iterator_t write = 0;
	nu_revread_iterator_t revread = 0;

	assert(nu_utf32_read_bom("\xFF\xFE\x00\x00" /* LE */, &write_bom, &read, &write, &revread));
#ifdef NU_WITH_UTF32_WRITER
	assert(write_bom == nu_utf32le_write_bom);
#else
	assert(write_bom == 0);
#endif
	assert(read == nu_utf32le_read);
	assert(write == nu_utf32le_write);
#ifdef NU_WITH_REVERSE_READ
	assert(revread == nu_utf32le_revread);
#else
	assert(revread == 0);
#endif
	
	assert(nu_utf32_read_bom("\x00\x00\xFE\xFF" /* BE */, &write_bom, &read, &write, &revread));
#ifdef NU_WITH_UTF32_WRITER
	assert(write_bom == nu_utf32be_write_bom);
#else
	assert(write_bom == 0);
#endif
	assert(read == nu_utf32be_read);
	assert(write == nu_utf32be_write);
#ifdef NU_WITH_REVERSE_READ
	assert(revread == nu_utf32be_revread);
#else
	assert(revread == 0);
#endif
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

#endif /* NU_WITH_UTF32_READER */

#ifdef NU_WITH_UTF32_WRITER

void test_utf32_write_bom() {
	char bom[4] = { 0 };

	assert(nu_utf32le_write_bom(bom)
		&& (unsigned char)(bom[0]) == 0xFF && (unsigned char)(bom[1]) == 0xFE
		&& bom[2] == 0 && bom[3] == 0);
	assert(nu_utf32be_write_bom(bom)
		&& bom[0] == 0 && bom[1] == 0
		&& (unsigned char)(bom[2]) == 0xFE && (unsigned char)(bom[3]) == 0xFF);
}

#endif /* NU_WITH_UTF32_WRITER */
