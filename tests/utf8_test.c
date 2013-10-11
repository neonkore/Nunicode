#include <assert.h>
#include <string.h>

#include <libnu.h>
#include <build_config.h>

#ifdef NU_WITH_UTF8_READER

void test_utf8_strlen() {
	assert(nu_utf8_strlen("g", 1) == 1);
	assert(nu_utf8_strlen("gh", 2) == 2);
	assert(nu_utf8_strlen("п", 2) == 1);
	assert(nu_utf8_strlen("пр", 4) == 2);
	assert(nu_utf8_strlen("€", 3) == 1);
	assert(nu_utf8_strlen("𠜱", 4) == 1);
}

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

void test_utf8_bytelen() {
	uint32_t u = 0;

	u = 0x0067; assert(nu_utf8_bytelen(&u, 1) == 1);
	u = 0x043F; assert(nu_utf8_bytelen(&u, 1) == 2);
	u = 0x20AC; assert(nu_utf8_bytelen(&u, 1) == 3);
	u = 0x020731; assert(nu_utf8_bytelen(&u, 1) == 4);
}

void test_utf8_encoding() {
	char p[32] = { 0 };
	
	assert(nu_utf8_write(0, p) && strcmp(p, "") == 0);
	assert(nu_utf8_write(0x0067, p) && strcmp(p, "g") == 0);
	assert(nu_utf8_write(0x043F, p) && strcmp(p, "п") == 0);
	assert(nu_utf8_write(0x20AC, p) && strcmp(p, "€") == 0);
	assert(nu_utf8_write(0x020731, p) && strcmp(p, "𠜱") == 0);
}

#endif
