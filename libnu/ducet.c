#include <assert.h>

#include "ducet.h"
#include "udb.h"

#ifdef NU_WITH_DUCET

#include "gen/_ducet.c"

int32_t nu_ducet_weight(uint32_t codepoint, int32_t *weight, void *context) {
	(void)(weight);
	(void)(context);

	if (codepoint == 0) {
		return 0;
	}

	assert(NU_DUCET_G_SIZE < 0x7FFFFFFF - 0x10FFFF);

	uint32_t value = nu_udb_lookup_value(codepoint, NU_DUCET_G, NU_DUCET_G_SIZE,
		NU_DUCET_VALUES_C, NU_DUCET_VALUES_I);

	return (value != 0
		? (int32_t)(value)
		: (int32_t)(codepoint + NU_DUCET_G_SIZE));

	/* ISO/IEC 14651 requests that codepoints with undefined weight should be
	 * sorted before max weight in collation table. This way all codepoints
	 * defined in ducet would have weight under NU_DUCET_G_SIZE, all undefined
	 * codepoints would have weight under 0x10FFFF + NU_DUCET_G_SIZE - 1,
	 * max weight will be 0x10FFFF + NU_DUCET_G_SIZE */

	/* Regarding integer overflow:
	 *
	 * int32_t can hold 0xFFFFFFFF / 2 = 0x7FFFFFFF positive numbers, this
	 * function can safely offset codepoint value up to +2146369536 without
	 * risk of overflow. Thus max collation table size supported is
	 * 2146369536 (0x7FFFFFFF - 0x10FFFF) */
}

#endif /* NU_WITH_DUCET */
