#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

#ifdef NU_WITH_UTF8_READER

void test_utf8_decoding() {
	uint32_t u = 0;
	
	assert(nu_utf8_read("", &u) && u == 0);
	assert(nu_utf8_read("g", &u) && u == 0x0067);
	assert(nu_utf8_read("п", &u) && u == 0x043F);
	assert(nu_utf8_read("€", &u) && u == 0x20AC);
	assert(nu_utf8_read("𠜱", &u) && u == 0x020731);
}

#endif

#ifdef NU_WITH_UTF8_WRITER

void test_utf8_encoding() {
	char p[32] = { 0 };
	
	assert(nu_utf8_write(0, p) && strcmp(p, "") == 0);
	assert(nu_utf8_write(0x0067, p) && strcmp(p, "g") == 0);
	assert(nu_utf8_write(0x043F, p) && strcmp(p, "п") == 0);
	assert(nu_utf8_write(0x20AC, p) && strcmp(p, "€") == 0);
	assert(nu_utf8_write(0x020731, p) && strcmp(p, "𠜱") == 0);
}

#endif
