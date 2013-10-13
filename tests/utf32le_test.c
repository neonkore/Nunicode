#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

#ifdef NU_WITH_UTF32LE_READER

void test_utf32le_decoding() {
	uint32_t u = 0;

	assert(nu_utf32le_read("\x67\x00\x00\x00" /* g */, &u) && u == 0x0067);
	assert(nu_utf32le_read("\x05\x02\x00\x00" /* ȅ */, &u) && u == 0x0205);
	assert(nu_utf32le_read("\xAC\x20\x00\x00" /* € */, &u) && u == 0x20AC);
	assert(nu_utf32le_read("\x00\x04\x01\x00" /* 𐐀 */, &u) && u == 0x10400);
	assert(nu_utf32le_read("\x31\x07\x02\x00" /* 𠜱 */, &u) && u == 0x020731);
}

#ifdef NU_WITH_REVERSE_READ

void test_utf32le_revread() {
	const char *input = "\x05\x02\x00\x00\x00\x04\x01\x00\x31\x07\x02\x00"; /* ȅ𐐀𠜱 */
	uint32_t u = 0;

	assert(nu_utf32le_revread(&u, input + 4) == input);
	assert(u == 0x0205);
	assert(nu_utf32le_revread(&u, input + 8) == input + 4);
	assert(u == 0x10400);
	assert(nu_utf32le_revread(&u, input + 12) == input + 8);
	assert(u == 0x020731);
}

#endif /* NU_WITH_REVERSE_READ */
#endif /* NU_WITH_UTF32LE_READER */

#ifdef NU_WITH_UTF32LE_WRITER

void test_utf32le_encoding() {
	char p[32] = { 0 };

	assert(nu_utf32le_write(0x0067, p) && strcmp("\x67\x00\x00\x00" /* g */, p) == 0);
	assert(nu_utf32le_write(0x0205, p) && strcmp("\x05\x02\x00\x00" /* ȅ */, p) == 0);
	assert(nu_utf32le_write(0x20AC, p) && strcmp("\xAC\x20\x00\x00" /* € */, p) == 0);
	assert(nu_utf32le_write(0x10400, p) && strcmp("\x00\x04\x01\x00" /* 𐐀 */, p) == 0);
	assert(nu_utf32le_write(0x020731, p) && strcmp("\x31\x07\x02\x00" /* 𠜱 */, p) == 0);
}

#endif /* NU_WITH_UTF32LE_WRITER */
