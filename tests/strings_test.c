#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_strings_strlen() {
	assert(nu_strlen("hello", nu_utf8_read) == 5);
	assert(nu_strlen("привет", nu_utf8_read) == 6);
}

void test_strings_bytelen() {
	const uint32_t input[] = { 0x043f, 0x0440, 0x0438, 0x0432, 0x0435, 0x0442, 0 }; /* "привет" */
	const uint32_t zero[] = { 0 };

	assert(nu_bytelen(input, nu_utf8_write) == 12);
	assert(nu_bytelen(zero, nu_utf8_write) == 0);
}

void test_strings_readstr() {
	const char input[] = "привет";
	uint32_t u[sizeof(input)] = { 0 };

	assert(nu_readstr(input, u, nu_utf8_read) == 0);
	assert(u[5] != 0);
	assert(u[6] == 0);
}

void test_strings_writestr() {
	const uint32_t input[] = { 0x043f, 0x0440, 0x0438, 0x0432, 0x0435, 0x0442, 0 };
	char u[sizeof(input) * 2] = { 0 };

	assert(nu_writestr(input, u, nu_utf8_write) == 0);
	assert(u[5 * 2] != 0);
	assert(u[6 * 2] == 0);
}

void test_strings_transformstr() {
	const unsigned char input[] = { 0xED, 0xA0, 0x81, 0xED, 0xB0, 0x80, 0 }; /* 𐐀 + \0 in CESU-8 */
	char output[sizeof(input)] = { 0 };

	assert(nu_transformstr((const char *)input, output, nu_cesu8_read, nu_utf8_write) == 0);
	assert(strcmp(output, "𐐀") == 0);
}

