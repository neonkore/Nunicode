#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf16be_decoding() {
	uint32_t u = 0;

	/* skip output */
	assert(nu_utf16be_read("\x00\x67" /* g */, 0));
	assert(nu_utf16be_read("\xD8\x01\xDC\x00" /* 𐐀 */, 0) && u == 0);

	/* read output */
	assert(nu_utf16be_read("\x00\x67" /* g */, &u) && u == 0x0067);
	assert(nu_utf16be_read("\x02\x05" /* ȅ */, &u) && u == 0x0205);
	assert(nu_utf16be_read("\x20\xAC" /* € */, &u) && u == 0x20AC);
	assert(nu_utf16be_read("\xD8\x01\xDC\x00" /* 𐐀 */, &u) && u == 0x10400);
	assert(nu_utf16be_read("\xD8\x41\xDF\x31" /* 𠜱 */, &u) && u == 0x020731);

	assert(nu_utf16be_read("\xDF\x01", &u) && u == 0xDF01);
}

void test_utf16be_revread() {
	const char *input = "\x02\x05\xD8\x01\xDC\x00\xD8\x41\xDF\x31"; /* ȅ𐐀𠜱 */
	uint32_t u = 0;

	assert(nu_utf16be_revread(0, input + 2));
	assert(nu_utf16be_revread(&u, input + 2) == input);
	assert(u == 0x0205);
	assert(nu_utf16be_revread(&u, input + 6) == input + 2);
	assert(u == 0x10400);
	assert(nu_utf16be_revread(&u, input + 10) == input + 6);
	assert(u == 0x020731);

	assert(nu_utf16be_revread(&u, "\xEF\x01" + 2) && u == 0xEF01);
}

void test_utf16be_encoding() {
	char p[32] = { 0 };

	/* skip output */
	assert(nu_utf16be_write(0x0067, 0) && memcmp("", p, 1) == 0);

	assert(nu_utf16be_write(0x0067, p) && memcmp("\x00\x67" /* g */, p, 2) == 0);
	assert(nu_utf16be_write(0x0205, p) && memcmp("\x02\x05" /* ȅ */, p, 2) == 0);
	assert(nu_utf16be_write(0x20AC, p) && memcmp("\x20\xAC" /* € */, p, 2) == 0);
	assert(nu_utf16be_write(0x10400, p) && memcmp("\xD8\x01\xDC\x00" /* 𐐀 */, p, 4) == 0);
	assert(nu_utf16be_write(0x020731, p) && memcmp("\xD8\x41\xDF\x31" /* 𠜱 */, p, 4) == 0);
}
