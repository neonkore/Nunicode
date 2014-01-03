#include <assert.h>

#include <libnu/libnu.h>

void test_ducet() {
	/* Latin R */
	assert(nu_ducet_value('r') < nu_ducet_value('R'));

	/* Cyrillic Е and Ё */
	assert(nu_ducet_value(0x0415) < nu_ducet_value(0x0401));
}
