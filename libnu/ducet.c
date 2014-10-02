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

	uint32_t value = nu_udb_lookup_value(codepoint, NU_DUCET_G, NU_DUCET_G_SIZE,
		NU_DUCET_VALUES_C, NU_DUCET_VALUES_I);

	return (value != 0 ? (int32_t)(value) : INT32_MAX);
}

#endif /* NU_WITH_DUCET */
