#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_utf16le_decoding() {
	uint32_t u = 0;

	/* skip output */
	assert(nu_utf16le_read("\x67\x00" /* g */, 0));
	assert(nu_utf16le_read("\x01\xD8\x00\xDC" /* 𐐀 */, 0) && u == 0);

	/* read output */
	assert(nu_utf16le_read("\x00", &u) && u == 0);
	assert(nu_utf16le_read("\x67\x00" /* g */, &u) && u == 0x0067);
	assert(nu_utf16le_read("\x05\x02" /* ȅ */, &u) && u == 0x0205);
	assert(nu_utf16le_read("\xAC\x20" /* € */, &u) && u == 0x20AC);
	assert(nu_utf16le_read("\x01\xD8\x00\xDC" /* 𐐀 */, &u) && u == 0x10400);
	assert(nu_utf16le_read("\x41\xD8\x31\xDF" /* 𠜱 */, &u) && u == 0x020731);

	assert(nu_utf16le_read("\x01\xDF", &u) && u == 0xDF01);
}

void test_utf16le_revread() {
	const char *input = "\x05\x02\x01\xD8\x00\xDC\x41\xD8\x31\xDF"; /* ȅ𐐀𠜱 */
	uint32_t u = 0;

	assert(nu_utf16le_revread(0, input + 2));
	assert(nu_utf16le_revread(&u, input + 2) == input);
	assert(u == 0x0205);
	assert(nu_utf16le_revread(&u, input + 6) == input + 2);
	assert(u == 0x10400);
	assert(nu_utf16le_revread(&u, input + 10) == input + 6);
	assert(u == 0x020731);

	assert(nu_utf16le_revread(&u, "\x01\xEF" + 2) && u == 0xEF01);
}

void test_utf16le_encoding() {
	char p[32] = { 0 };

	/* skip output */
	assert(nu_utf16le_write(0x0067, 0) && memcmp("", p, 1) == 0);

	assert(nu_utf16le_write(0x0067, p) && memcmp("\x67\x00" /* g */, p, 2) == 0);
	assert(nu_utf16le_write(0x0205, p) && memcmp("\x05\x02" /* ȅ */, p, 2) == 0);
	assert(nu_utf16le_write(0x20AC, p) && memcmp("\xAC\x20" /* € */, p, 2) == 0);
	assert(nu_utf16le_write(0x10400, p) && memcmp("\x01\xD8\x00\xDC" /* 𐐀 */, p, 4) == 0);
	assert(nu_utf16le_write(0x020731, p) && memcmp("\x41\xD8\x31\xDF" /* 𠜱 */, p, 4) == 0);
}
