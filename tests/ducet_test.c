#include <assert.h>

#include <libnu/libnu.h>

void test_ducet() {
	/* Latin R */
	assert(nu_ducet_weight('r', 0) < nu_ducet_weight('R', 0));

	/* Cyrillic Е and Ё */
	assert(nu_ducet_weight(0x0415, 0) < nu_ducet_weight(0x0401, 0));
}

void test_ducet_known_unknown() {
	assert(nu_ducet_weight('a', 0) > 0);
	assert(nu_ducet_weight(1, 0) == INT32_MAX);

	assert(nu_ducet_weight(0, 0) == 0); /* special case */
}
