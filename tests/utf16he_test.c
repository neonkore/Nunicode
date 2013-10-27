#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf16he_decoding() {
	const uint16_t t = 0x0067;
	const char *input = (const char *)(&t);
	uint32_t u = 0;

	assert(nu_utf16he_read(input, 0));
	assert(nu_utf16he_read(input, &u) && u == 0x0067);
}

void test_utf16he_revread() {
	const uint16_t t[] = { 0x0067, 0x0068 };
	const char *input = (const char *)(t);
	uint32_t u = 0;

	assert(nu_utf16he_revread(0, input));
	assert(nu_utf16he_revread(&u, input + 2) && u == 0x0067);
}

void test_utf16he_encoding() {
	const uint16_t t = 0x0067;
	char p[32] = { 0 };

	assert(nu_utf16he_write(t, p) && memcmp(&t, p, 2) == 0);
}
