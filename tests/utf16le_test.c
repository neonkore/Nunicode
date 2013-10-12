#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

#ifdef NU_WITH_UTF16LE_READER

void test_utf16le_decoding() {
	uint32_t u = 0;

	assert(nu_utf16le_read("\x67\x00" /* g */, &u) && u == 0x0067);
	assert(nu_utf16le_read("\x05\x02" /* ȅ */, &u) && u == 0x0205);
	assert(nu_utf16le_read("\xAC\x20" /* € */, &u) && u == 0x20AC);
	assert(nu_utf16le_read("\x01\xD8\x00\xDC" /* 𐐀 */, &u) && u == 0x10400);
	assert(nu_utf16le_read("\x41\xD8\x31\xDF" /* 𠜱 */, &u) && u == 0x020731);
}

#endif /* NU_WITH_UTF16LE_READER */

#ifdef NU_WITH_UTF16LE_WRITER

void test_utf16le_encoding() {
	char p[32] = { 0 };

	assert(nu_utf16le_write(0x0067, p) && strcmp("\x67\x00" /* g */, p) == 0);
	assert(nu_utf16le_write(0x0205, p) && strcmp("\x05\x02" /* ȅ */, p) == 0);
	assert(nu_utf16le_write(0x20AC, p) && strcmp("\xAC\x20" /* € */, p) == 0);
	assert(nu_utf16le_write(0x10400, p) && strcmp("\x01\xD8\x00\xDC" /* 𐐀 */, p) == 0);
	assert(nu_utf16le_write(0x020731, p) && strcmp("\x41\xD8\x31\xDF" /* 𠜱 */, p) == 0);
}

#endif /* NU_WITH_UTF16LE_WRITER */
