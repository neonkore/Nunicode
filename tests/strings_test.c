#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

#ifdef NU_WITH_ZERO_STRINGS

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

#endif /* NU_WITH_ZERO_STRINGS */

#ifdef NU_WITH_N_STRINGS

void test_strings_strnlen() {
	assert(nu_strnlen("привет", 1, nu_utf8_read) == 1); /* might happen */
	assert(nu_strnlen("привет", 2, nu_utf8_read) == 1);
	assert(nu_strnlen("привет", 4, nu_utf8_read) == 2);
	assert(nu_strnlen("привет", 400, nu_utf8_read) == 6); /* didn't go over 0 */
}

void test_strings_bytenlen() {
	const uint32_t input[] = { 0x043f, 0x0440, 0x0438, 0x0432, 0x0435, 0x0442, 0 }; /* "привет" */

	assert(nu_bytenlen(input, 1, nu_utf8_write) == 2);
	assert(nu_bytenlen(input, 2, nu_utf8_write) == 4);
	assert(nu_bytenlen(input, 200, nu_utf8_write) == 6 * 2); /* didnt go over 0 */
}

void test_strings_readnstr() {
	const char input[] = "привет";
	uint32_t u[sizeof(input)] = { 0 };

	assert(nu_readnstr(input, 2, u, nu_utf8_read) == 0);
	assert(u[0] != 0);
	assert(u[1] == 0);
	
	assert(nu_readnstr(input, 4, u, nu_utf8_read) == 0);
	assert(u[1] != 0);
	assert(u[2] == 0);
	
	assert(nu_readnstr(input, 400, u, nu_utf8_read) == 0); /* didn't go over 0 */
	assert(u[5] != 0);
	assert(u[6] == 0);
}

void test_strings_writenstr() {
	const uint32_t input[] = { 0x043f, 0x0440, 0x0438, 0x0432, 0x0435, 0x0442, 0 };
	char u[sizeof(input) * 2] = { 0 };

	assert(nu_writenstr(input, 1, u, nu_utf8_write) == 0);
	assert(u[0 * 2] != 0);
	assert(u[1 * 2] == 0);
	
	assert(nu_writenstr(input, 2, u, nu_utf8_write) == 0);
	assert(u[1 * 2] != 0);
	assert(u[2 * 2] == 0);
	
	assert(nu_writenstr(input, 200, u, nu_utf8_write) == 0); /* didn't go over 0 */
	assert(u[5 * 2] != 0);
	assert(u[6 * 2] == 0);
}

void test_strings_transformnstr() {
	const unsigned char input[] = { 0xED, 0xA0, 0x81, 0xED, 0xB0, 0x80, 0 }; /* 𐐀 + \0 in CESU-8 */
	char output[sizeof(input)] = { 1, 1, 1, 1, 1, 1 }; /* in UTF-8 it's 4-bytes sequence */

	assert(nu_transformnstr((const char *)input, 1, output, nu_cesu8_read, nu_utf8_write) == 0);
	assert(output[3] != 0);
	assert(output[4] != 0);
	
	assert(nu_transformnstr((const char *)input, 2, output, nu_cesu8_read, nu_utf8_write) == 0);
	assert(output[3] != 0);
	assert(output[4] != 0); /* transform stopped on trailing 0 */
}

#endif /* NU_WITH_N_STRINGS */
