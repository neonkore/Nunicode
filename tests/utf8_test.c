#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf8_decoding() {
	uint32_t u = 0;

	assert(nu_utf8_read("", &u) && u == 0);

	/* skip output */
	assert(nu_utf8_read("g", 0) && u == 0);
	assert(nu_utf8_read("п", 0) && u == 0);
	assert(nu_utf8_read("€", 0) && u == 0);
	assert(nu_utf8_read("𠜱", 0) && u == 0);

	/* read output */
	assert(nu_utf8_read("g", &u) && u == 0x0067);
	assert(nu_utf8_read("п", &u) && u == 0x043F);
	assert(nu_utf8_read("€", &u) && u == 0x20AC);
	assert(nu_utf8_read("𠜱", &u) && u == 0x020731);
}

void test_utf8_bom() {
	uint32_t u = 0;

	assert(nu_utf8_read("\xEF\xBB\xBF", &u) && u == 0xFEFF);
}

void test_utf8_revread() {
	const char input[] = "привет";
	uint32_t u = 0;

	assert(nu_utf8_revread(&u, input + 12) == input + 10);
	assert(u == 0x0442);
	assert(nu_utf8_revread(&u, input + 10) == input + 8);
	assert(u == 0x0435);

	/* skip output */
	assert(nu_utf8_revread(0, input + 10) == input + 8);

	/* this is not supported, but should work anyway */
	const char *long_input = "𠜱";
	assert(nu_utf8_revread(&u, long_input + 1) == long_input);
	assert(nu_utf8_revread(&u, long_input + 2) == long_input);
	assert(nu_utf8_revread(&u, long_input + 3) == long_input);
	assert(u == 0x020731);
}

void test_utf8_encoding() {
	char p[32] = { 0 };

	assert(nu_utf8_write(0, p) && memcmp(p, "", 1) == 0);
	assert(nu_utf8_write(0x0067, p) && memcmp(p, "g", 1) == 0);
	assert(nu_utf8_write(0x043F, p) && memcmp(p, "п", 2) == 0);
	assert(nu_utf8_write(0x20AC, p) && memcmp(p, "€", 2) == 0);
	assert(nu_utf8_write(0x020731, p) && memcmp(p, "𠜱", 3) == 0);
}
