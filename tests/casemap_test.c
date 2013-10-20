#include <assert.h>

#include <libnu/libnu.h>

void test_toupper() {
	assert(nu_toupper(0x0061) == 0x0041);
	assert(nu_toupper(0x0451) == 0x0401);
	assert(nu_toupper(0x00F4) == 0x00D4);

	assert(nu_toupper(0x00A0) == 0);
}

void test_tolower() {
	assert(nu_tolower(0x0041) == 0x0061);
	assert(nu_tolower(0x0401) == 0x0451);
	assert(nu_tolower(0x00D4) == 0x00F4);

	assert(nu_tolower(0x00A0) == 0);
}
