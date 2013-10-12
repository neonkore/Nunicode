#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

#ifdef NU_WITH_UTF16BE_READER

void test_utf16be_decoding() {
	uint32_t u = 0;

	assert(nu_utf16be_read("\x00\x67" /* g */, &u) && u == 0x0067);
	assert(nu_utf16be_read("\x02\x05" /* ȅ */, &u) && u == 0x0205);
	assert(nu_utf16be_read("\x20\xAC" /* € */, &u) && u == 0x20AC);
	assert(nu_utf16be_read("\xD8\x01\xDC\x00" /* 𐐀 */, &u) && u == 0x10400);
	assert(nu_utf16be_read("\xD8\x41\xDF\x31" /* 𠜱 */, &u) && u == 0x020731);
}

#endif /* NU_WITH_UTF16BE_READER */

#ifdef NU_WITH_UTF16BE_WRITER

void test_utf16be_encoding() {
	char p[32] = { 0 };

	assert(nu_utf16be_write(0x0067, p) && strcmp("\x00\x67" /* g */, p) == 0);
	assert(nu_utf16be_write(0x0205, p) && strcmp("\x02\x05" /* ȅ */, p) == 0);
	assert(nu_utf16be_write(0x20AC, p) && strcmp("\x20\xAC" /* € */, p) == 0);
	assert(nu_utf16be_write(0x10400, p) && strcmp("\xD8\x01\xDC\x00" /* 𐐀 */, p) == 0);
	assert(nu_utf16be_write(0x020731, p) && strcmp("\xD8\x41\xDF\x31" /* 𠜱 */, p) == 0);
}

#endif /* NU_WITH_UTF16BE_WRITER */
