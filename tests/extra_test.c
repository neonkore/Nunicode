#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_readstr() {
	const char input[] = "\x04\x3F\x04\x40\x04\x38\x04\x32"
		"\x04\x35\x04\x42\x00\x20\x04\x3C"
		"\x04\x38\x04\x40\x00"; /* "привет мир" in UTF-16BE, no BOM */
	assert(((const uint16_t*)input)[10] == 0);
	uint32_t u[sizeof(input)] = { 0 };

	assert(nu_readstr(input, u, nu_utf16be_read) == 0);

	assert(u[9] != 0);
	assert(u[10] == 0);
}

void test_writestr() {
	const uint32_t input[] = { 0x043f, 0x0440, 0x0438, 0x0432, 0x0435, 0x0442, 0 };
	char u[sizeof(input) * 2] = { 0 };

	assert(nu_writestr(input, u, nu_utf8_write) == 0);
	assert(u[5 * 2] != 0);
	assert(u[6 * 2] == 0);
}

void test_transformstr() {
	const unsigned char input[] = { 0xED, 0xA0, 0x81, 0xED, 0xB0, 0x80, 0 }; /* 𐐀 + \0 in CESU-8 */
	char output[sizeof(input)] = { 0 };

	assert(nu_transformstr((const char *)input, output, nu_cesu8_read, nu_utf8_write) == 0);
	assert(strcmp(output, "𐐀") == 0);
}

void test_readnstr() {
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

void test_writenstr() {
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

void test_transformnstr() {
	const unsigned char input[] = { 0xED, 0xA0, 0x81, 0xED, 0xB0, 0x80, 0 }; /* 𐐀 + \0 in CESU-8 */
	char output[sizeof(input)] = { 1, 1, 1, 1, 1, 1 }; /* in UTF-8 it's 4-bytes sequence */

	assert(nu_transformnstr((const char *)input, 1, output, nu_cesu8_read, nu_utf8_write) == 0);
	assert(output[3] != 0);
	assert(output[4] != 0);

	assert(nu_transformnstr((const char *)input, sizeof(input), output, nu_cesu8_read, nu_utf8_write) == 0);
	assert(output[3] != 0);
	assert(output[4] == 0);
	assert(output[5] != 0); /* transform stopped on trailing 0 */
}

void test_strtransformlen() {
	assert(nu_strtransformlen("Masse", nu_utf8_read,
		nu_toupper, nu_casemap_read) == 5);
	assert(nu_strtransformlen("Maße", nu_utf8_read,
		nu_toupper, nu_casemap_read) == 5);
}

void test_strtransformnlen() {
	/* "Maße" - 5 bytes, "Masse" - 5 codepoints */
	assert(nu_strtransformnlen("Maße", 5, nu_utf8_read,
		nu_toupper, nu_casemap_read) == 5);
	assert(nu_strtransformnlen("Maße", 2, nu_utf8_read,
		nu_toupper, nu_casemap_read) == 2);
	assert(nu_strtransformnlen("Maße", 3, nu_utf8_read,
		nu_toupper, nu_casemap_read) == 4);
}

void test__strtransformlen() { /* test to check basic functions and valgrind output */
	/* "ΔΙΆΛΕΚΤΟΣ" - 18 bytes, "διάλεκτος" - 9 codepoints */

	assert(_nu_strtransformlen("ΔΙΆΛΕΚΤΟΣ", nu_utf8_read,
		_nu_tolower, nu_casemap_read, 0) == 9);
	assert(_nu_strtransformlen("ΔΙΆΛΕΚΤΟΣ ", nu_utf8_read,
		_nu_tolower, nu_casemap_read, 0) == 10);
}

void test__strtransformnlen() {
	/* test to check boundaries and valgrind output
	 * "ΔΙΆΛΕΚΤΟΣ" - 18 bytes, "διάλεκτος" - 9 codepoints */

	assert(_nu_strtransformnlen("ΔΙΆΛΕΚΤΟΣ", 18, nu_utf8_read,
		_nu_tolower, nu_casemap_read, 0) == 9);
	assert(_nu_strtransformnlen("ΔΙΆΛΕΚΤΟΣ ", 20, nu_utf8_read,
		_nu_tolower, nu_casemap_read, 0) == 10);
	assert(_nu_strtransformnlen("ΔΙΆΛΕΚΤΟΣ ", 18, nu_utf8_read,
		_nu_tolower, nu_casemap_read, 0) == 9);
}

void test__strtransformlen_internal_external() { /* test to compare _nu_toupper() to nu_toupper() */
	assert(_nu_strtransformlen("Maße", nu_utf8_read,
		_nu_toupper, nu_casemap_read, 0)
	== nu_strtransformlen("Maße", nu_utf8_read,
		nu_toupper, nu_casemap_read));

	assert(_nu_strtransformnlen("Maße", 5, nu_utf8_read,
		_nu_toupper, nu_casemap_read, 0)
	== nu_strtransformnlen("Maße", 5, nu_utf8_read,
		nu_toupper, nu_casemap_read));
}
