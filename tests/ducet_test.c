#include <assert.h>

#include <libnu/libnu.h>

#include "switch_test_base.h"

extern const size_t NU_DUCET_G_SIZE;
extern const size_t _NU_DUCET_CONTRACTIONS;
extern const size_t _NU_DUCET_CODEPOINTS;

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
	const size_t detect_unweighted = NU_DUCET_G_SIZE + _NU_DUCET_CONTRACTIONS;
	const size_t expect_weighted = NU_DUCET_G_SIZE + 1; /* extra weight for special case U+0000 */

	size_t weights_returned = 0;
	uint32_t u = 0; for (; u < 0x10FFFF; ++u) {
		int32_t w = nu_ducet_weight(u, 0, 0);
		if ((size_t)(w) != u + detect_unweighted) {
			++weights_returned;
		}
	}

	/* check that number of actually weighted codepoints is the same
	 * as number of codepoints encoded to _ducet. otherwise there are
	 * collisions present in codepoints weighting */
	assert(weights_returned == expect_weighted);
}

void test_ducet_contractions() {
	/* basic test to check that nu_ducet_weight() support contractions,
	 * for complete test see auto-generated tests: test__nu_ducet_weight_* */

	const uint32_t a[] = { 0x00006C, 0x0000B7, };
	const uint32_t b[] = { 0x00004C, 0x0000B7, };
	const uint32_t c[] = { 0x00004C, 0x000387, };
	const uint32_t d[] = { 0x000430, 0x000306, };

	int32_t aw = _nu_test_contraction_weight(nu_ducet_weight, a, 2, 0);
	int32_t bw = _nu_test_contraction_weight(nu_ducet_weight, b, 2, 0);
	int32_t cw = _nu_test_contraction_weight(nu_ducet_weight, c, 2, 0);
	int32_t dw = _nu_test_contraction_weight(nu_ducet_weight, d, 2, 0);

	assert(aw < bw);
	assert(bw == cw);
	assert(cw < dw);

	const uint32_t unknown = 0x0411; /* no such ontraction, Unicode 7.0 */
	assert(nu_ducet_weight(unknown, 0, 0) > 0);
}

#ifndef NU_DISABLE_CONTRACTIONS
void test_ducet_consistency() {
	assert(NU_DUCET_G_SIZE == _NU_DUCET_CODEPOINTS); /* just extra check */
}
#endif
