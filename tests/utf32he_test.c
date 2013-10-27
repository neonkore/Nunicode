#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf32he_decoding() {
	const uint32_t t = 0x0067;
	const char *input = (const char *)(&t);
	uint32_t u = 0;

	assert(nu_utf32he_read(input, 0));
	assert(nu_utf32he_read(input, &u) && u == 0x0067);
}

void test_utf32he_revread() {
	const uint32_t t[] = { 0x0067, 0x0068 };
	const char *input = (const char *)(t);
	uint32_t u = 0;

	assert(nu_utf32he_revread(0, input));
	assert(nu_utf32he_revread(&u, input + 4) && u == 0x0067);
}

void test_utf32he_encoding() {
	const uint32_t t = 0x0067;
	char p[32] = { 0 };

	assert(nu_utf32he_write(t, p) && memcmp(&t, p, 4) == 0);
}
