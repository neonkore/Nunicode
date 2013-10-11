#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

static const unsigned char CESU8[] = { 0xED, 0xA0, 0x81, 0xED, 0xB0, 0x80 };
static const unsigned char CESU9[] = { 0xED, 0xAE, 0x80, 0xED, 0xB0, 0x80 };

#ifdef NU_WITH_CESU8_READER

void test_cesu8_decoding() {
	uint32_t u = 0;
	
	assert(nu_cesu8_read("", &u) && u == 0);
	assert(nu_cesu8_read("g", &u) && u == 0x0067);
	assert(nu_cesu8_read("п", &u) && u == 0x043F);
	assert(nu_cesu8_read("€", &u) && u == 0x20AC);
	assert(nu_cesu8_read((const char *)CESU8, &u) && u == 0x010400);
	assert(nu_cesu8_read((const char *)CESU9, &u) && u == 0x0F0000);
}

#endif

#ifdef NU_WITH_CESU8_WRITER

void test_cesu8_encoding() {
	char p[32] = { 0 };

	assert(nu_cesu8_write(0, p) && strcmp(p, "") == 0);
	assert(nu_cesu8_write(0x0067, p) && strcmp(p, "g") == 0);
	assert(nu_cesu8_write(0x043F, p) && strcmp(p, "п") == 0);
	assert(nu_cesu8_write(0x20AC, p) && strcmp(p, "€") == 0);
	assert(nu_cesu8_write(0x010400, p) && strcmp(p, (const char *)CESU8) == 0);
	assert(nu_cesu8_write(0x0F0000, p) && strcmp(p, (const char *)CESU9) == 0);
}

#endif
