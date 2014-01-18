#include "ducet.h"
#include "udb.h"

#ifdef NU_WITH_DUCET

#include "gen/_ducet.h"

static const size_t G_SIZE = sizeof(G) / sizeof(*G);

int32_t nu_ducet_weight(uint32_t codepoint, int32_t weight) {
	(void)(weight);

	if (codepoint == 0) {
		return 0;
	}

	uint32_t value = nu_udb_lookup_value(codepoint, G, G_SIZE, VALUES_C, VALUES_I);
	return (value != 0 ? (int32_t)(value) : INT32_MAX);
}

#endif /* NU_WITH_DUCET */
