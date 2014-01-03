#include "ducet.h"
#include "udb.h"

#ifndef NU_WITH_DUCET

#include "gen/_ducet.h"

static const size_t G_SIZE = sizeof(G) / sizeof(*G);

uint32_t nu_ducet_value(uint32_t codepoint) {
	return nu_udb_lookup_value(codepoint, G, G_SIZE, VALUES);
}

int nu_ducet_codepointcmp(uint32_t u1, uint32_t u2) {
	uint32_t u1_weight = nu_ducet_value(u1);
	uint32_t u2_weight = nu_ducet_value(u2);

	if (u1_weight < u2_weight) {
		return -1;
	}

	if (u1_weight > u2_weight) {
		return 1;
	}

	return 0;
}

#endif /* NU_WITH_DUCET */
