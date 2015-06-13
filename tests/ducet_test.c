#include <assert.h>

#include <libnu/libnu.h>

extern const size_t NU_DUCET_G_SIZE;

void test_ducet() {
	/* Latin R */
	assert(nu_ducet_weight('r', 0, 0) < nu_ducet_weight('R', 0, 0));

	/* Cyrillic Е and Ё */
	assert(nu_ducet_weight(0x0415, 0, 0) < nu_ducet_weight(0x0401, 0, 0));

	/* Cyrillic ё and я, lowercase and uppercase */
	assert(nu_ducet_weight(0x0451, 0, 0) < nu_ducet_weight(0x044F, 0, 0));
	assert(nu_ducet_weight(0x0401, 0, 0) < nu_ducet_weight(0x042A, 0, 0));
}

void test_ducet_known_unknown() {
	assert(nu_ducet_weight('a', 0, 0) > 0); /* known */
	assert(nu_ducet_weight(1, 0, 0) > nu_ducet_weight('a', 0, 0)); /* unknown */

	assert(nu_ducet_weight(0, 0, 0) == 0); /* special case */
}

void test_ducet_collisions() {
	size_t weights_returned = 0;

	uint32_t u = 0; for (; u < 0x10FFFF; ++u) {
		int32_t w = nu_ducet_weight(u, 0, 0);
		if ((size_t)(w) != u + NU_DUCET_G_SIZE) {
			++weights_returned;
		}
	}

	/* check that number of actually weighted codepoints is the same
	 * as number of codepoints encoded to _ducet. otherwise there are
	 * collisions present in codepoints weighting */
	assert(weights_returned == NU_DUCET_G_SIZE + 1);
	/* additional weight returned is for codepoint U+0000 - special
	 * case with weight 0 */
}
