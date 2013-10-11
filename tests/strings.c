#include <assert.h>

#include <libnu/libnu.h>

void test_strings_strlen() {
	assert(nu_strlen("hello", nu_utf8_read) == 5);
	assert(nu_strlen("привет", nu_utf8_read) == 6);
}

void test_strings_bytelen() {
	const uint32_t input[] = { 0x043f, 0x0440, 0x0438, 0x0432, 0x0435, 0x0442, 0 }; /* "привет" */

	assert(nu_bytelen(input, nu_utf8_write) == 12);
}
