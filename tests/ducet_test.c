#include <assert.h>

#include <libnu/libnu.h>

void test_ducet() {
	/* Latin R */
	assert(nu_ducet_value('r') < nu_ducet_value('R'));

	/* Cyrillic Е and Ё */
	assert(nu_ducet_value(0x0415) < nu_ducet_value(0x0401));
}

void test_ducet_known_unknown() {
	assert(nu_ducet_value('a') != (uint32_t)(-1));
	assert(nu_ducet_value(0) == (uint32_t)(-1));

	/* 0 is compared in codepoint order */
	assert(nu_ducet_codepointcmp('a', 0) > 0);
	assert(nu_ducet_codepointcmp(0, 'a') < 0);
}
