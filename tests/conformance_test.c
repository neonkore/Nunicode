#include <assert.h>

#include <libnu/libnu.h>

/* some conformance tests */

/* Unicode 7.0,
 * special casing */
void test_special_casing() {
	uint32_t u;
	const char *map = 0;

	/* İ, should lowercase to U+0069 U+0307, other case options are
	 * locale-specific */
	map = nu_tolower(0x0130);
	assert(map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x0069 && map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x0307 && map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0);

	/* ŉ, shoud uppercase to U+02BC U+004E */
	map = nu_toupper(0x0149);
	assert(map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x02BC && map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x004E && map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0);

	/* Σ, lowercases to U+03C3, another option is context-dependent */
	map = nu_tolower(0x03A3);
	assert(map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x03C3 && map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0);
}

/* Unicode 7.0,
 * full/common casefolding */
void test_folding_priority() {
	/* folding class priority: F, C, S
	 *
	 * F: full case folding
	 * C: common case folding
	 * S: simple case folding
	 * T: special case folding
	 *
	 * latter is a subject for l10n and should be absent in udb
	 */

	uint32_t u;
	const char *map = 0;

	/* İ, full case folding is U+0069 U+0307, there is also special
	 * case folding available in source */
	map = nu_tofold(0x0130);
	assert(map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x0069 && map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x0307 && map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0);

	/* ǰ, the only option of case folding is full */
	map = nu_tofold(0x01F0);
	assert(map != 0);

	/* ᾇ, full case folding option is U+1F07 U+03B9,
	 * other case folding option is simple (S) */
	map = nu_tofold(0x1F8F);
	assert(map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x1F07 && map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x03B9 && map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0);

	/* I, common case folding to U+0069, other option is special case folding */
	map = nu_tofold(0x0049);
	assert(map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x0069 && map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0);
}

/* ISO/IEC 14651,
 * see description in nu_ducet_weight() */
void test_ducet_max_weight_ordering() {
	const uint32_t max = 0x0010FFFF; /* Unicode 7.0 */

	/* couple of general tests, just in case */
	assert(nu_ducet_weight('a', 0, 0) < nu_ducet_weight(max, 0, 0));
	assert(nu_ducet_weight('Z', 0, 0) < nu_ducet_weight(max, 0, 0));
	assert(nu_ducet_weight(0x002FA1D, 0, 0) < nu_ducet_weight(max, 0, 0));

	/* real tests */
	assert(nu_ducet_weight(0, 0, 0) < nu_ducet_weight(max, 0, 0));
	assert(nu_ducet_weight(0, 0, 0) < nu_ducet_weight(max - 1, 0, 0));
	assert(nu_ducet_weight(max - 1, 0, 0) < nu_ducet_weight(max, 0, 0));
}
