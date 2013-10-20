#include "casemap_internal.h"
#include "casemap.h"

#ifdef NU_WITH_TOLOWER

#include "gen/_tolower.h"

static const size_t FNV_SIZE = sizeof(FNV) / sizeof(*FNV);

uint32_t nu_tolower(uint32_t codepoint) {
	return to_something(codepoint, FNV, FNV_SIZE, VALUES);
}

#endif /* NU_WITH_TOLOWER */
