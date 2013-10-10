#include <assert.h>
#include <string.h>

#include <libnu.h>

void test_iterators_read() {
	const char input[] = "привет";
	uint32_t u[sizeof(input)] = { 0 };

	assert(nu_read_str(input, u, nu_utf8_read) == 0);
	assert(u[5] != 0);
	assert(u[6] == 0);
}

void test_iterators_write() {
	const uint32_t input[] = { 0x043f, 0x0440, 0x0438, 0x0432, 0x0435, 0x0442, 0 };
	char u[sizeof(input) * 2] = { 0 };

	assert(nu_write_str(input, u, nu_utf8_write) == 0);
	assert(u[5 * 2] != 0);
	assert(u[6 * 2] == 0);
}
