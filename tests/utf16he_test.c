#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

/* little-endian tests really */

void test_utf16he_decoding() {
	const uint16_t t1[] = { 0x0067 };
	const uint16_t t2[] = { 0xD801, 0xDC00 };
	const char *input1 = (const char *)(&t1);
	const char *input2 = (const char *)(&t2);

	uint32_t u = 0;

	/* skip output */
	assert(nu_utf16he_read(input1, 0) && u == 0);
	assert(nu_utf16he_read(input2, 0) && u == 0);

	/* read output */
	assert(nu_utf16he_read("\x00", &u) && u == 0);
	assert(nu_utf16he_read(input1, &u) && u == 0x0067);
	assert(nu_utf16he_read(input2, &u) && u == 0x10400);
}

void test_utf16he_revread() {
	const uint16_t t[] = { 0x0067, 0xD801, 0xDC00, 0x0068 };
	const char *input = (const char *)(t);
	uint32_t u = 0;

	/* skip output */
	assert(nu_utf16he_revread(0, input));

	assert(nu_utf16he_revread(&u, input + 6) && u == 0x10400);
	assert(nu_utf16he_revread(&u, input + 2) && u == 0x0067);

	assert(nu_utf16he_revread(&u, "\x01\xEF" + 2) && u == 0xEF01);
}

void test_utf16he_encoding() {
	const uint16_t t1 = 0x0067;
	const uint32_t t2 = 0x10400;
	const uint16_t t2_encoded[] = { 0xD801, 0xDC00 };

	char p[32] = { 0 };

	/* skip output */
	assert(nu_utf16he_write(t1, 0) && memcmp("", p, 1) == 0);

	assert(nu_utf16he_write(t1, p) && memcmp(&t1, p, 2) == 0);
	assert(nu_utf16he_write(t2, p) && memcmp(t2_encoded, p, 4) == 0);
}
