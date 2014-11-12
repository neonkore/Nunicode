#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf32be_decoding() {
	uint32_t u = 0;

	assert(nu_utf32be_read("\x00\x00\x00\x67" /* g */, 0));
	assert(nu_utf32be_read("\x00\x00\x00\x67" /* g */, &u) && u == 0x0067);
	assert(nu_utf32be_read("\x00\x00\x02\x05" /* ȅ */, &u) && u == 0x0205);
	assert(nu_utf32be_read("\x00\x00\x20\xAC" /* € */, &u) && u == 0x20AC);
	assert(nu_utf32be_read("\x00\x01\x04\x00" /* 𐐀 */, &u) && u == 0x10400);
	assert(nu_utf32be_read("\00\x02\x07\x31" /* 𠜱 */, &u) && u == 0x020731);
}

void test_utf32be_revread() {
	const char *input = "\x00\x00\x02\x05\x00\x01\x04\x00\00\x02\x07\x31"; /* ȅ𐐀𠜱 */
	uint32_t u = 0;

	assert(nu_utf32be_revread(0, input + 4));
	assert(nu_utf32be_revread(&u, input + 4) == input);
	assert(u == 0x0205);
	assert(nu_utf32be_revread(&u, input + 8) == input + 4);
	assert(u == 0x10400);
	assert(nu_utf32be_revread(&u, input + 12) == input + 8);
	assert(u == 0x020731);
}

void test_utf32be_encoding() {
	char p[32] = { 0 };

	/* skip output */
	assert(nu_utf32be_write(0x0067, 0) && memcmp("", p, 1) == 0);

	assert(nu_utf32be_write(0x0067, p) && memcmp("\x0\x00\x00\x67" /* g */, p, 4) == 0);
	assert(nu_utf32be_write(0x0205, p) && memcmp("\x00\x00\x02\x05" /* ȅ */, p, 4) == 0);
	assert(nu_utf32be_write(0x20AC, p) && memcmp("\x00\x00\x20\xAC" /* € */, p, 4) == 0);
	assert(nu_utf32be_write(0x10400, p) && memcmp("\x00\x01\x04\x00" /* 𐐀 */, p, 4) == 0);
	assert(nu_utf32be_write(0x020731, p) && memcmp("\00\x02\x07\x31" /* 𠜱 */, p, 4) == 0);
}
