#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_strlen() {
	assert(nu_strlen("hello", nu_utf8_read) == 5);
	assert(nu_strlen("привет", nu_utf8_read) == 6);
	assert(nu_strlen("\x04\x30\x00\x20\x04\x38\x00\x20\x04\x31\x00\x00", nu_utf16be_read) == 5); /* "а и б" in UTF-16BE, no BOM */
}

void test_strnlen() {
	assert(nu_strnlen("привет", 1, nu_utf8_read) == 1); /* might happen */
	assert(nu_strnlen("привет", 2, nu_utf8_read) == 1);
	assert(nu_strnlen("привет", 4, nu_utf8_read) == 2);
	assert(nu_strnlen("привет", 400, nu_utf8_read) == 6); /* didn't go over 0 */
	assert(nu_strnlen("\x04\x30\x00\x20\x04\x38\x00\x20\x04\x31\x00\x00", 4, nu_utf16be_read) == 2); /* "а и б" in UTF-16BE, no BOM */
}

void test_bytelen() {
	const uint32_t input[] = { 0x0430, 0x0020, 0x0438, 0x0020, 0x0431, 0 }; /* "а и б" + 0 */
	const uint32_t zero[] = { 0 };

	assert(nu_bytelen(input, nu_utf8_write) == 8);
	assert(nu_bytelen(input, nu_utf16be_write) == 10);
	assert(nu_bytelen(input, nu_utf16le_write) == 10);
	assert(nu_bytelen(input, nu_utf32be_write) == 20);
	assert(nu_bytelen(input, nu_utf32le_write) == 20);
	assert(nu_bytelen(zero, nu_utf8_write) == 0);
}

void test_bytenlen() {
	const uint32_t input[] = { 0x0430, 0x0020, 0x0438, 0x0020, 0x0431, 0 }; /* "а и б" + 0 */

	assert(nu_bytenlen(input, 1, nu_utf8_write) == 2);
	assert(nu_bytenlen(input, 2, nu_utf8_write) == 3);
	assert(nu_bytenlen(input, 200, nu_utf8_write) == 3 * 2 + 2); /* didnt go over 0 */
}

void test_strbytelen() {
	assert(nu_strbytelen("abc", nu_utf8_read) == 3);
	assert(nu_strbytelen("привет", nu_utf8_read) == 12);
	assert(nu_strbytelen("\x04\x30\x00\x20\x04\x38\x00\x20\x04\x31\x00\x00", nu_utf16be_read) == 5 * 2); /* "а и б" in UTF-16BE, no BOM */
}
