#include "casemap_internal.h"
#include "casemap.h"

#ifdef NU_WITH_TOUPPER

#include "gen/_toupper.h"

static const size_t FNV_SIZE = sizeof(FNV) / sizeof(*FNV);

uint32_t nu_toupper(uint32_t codepoint) {
	return to_something(codepoint, FNV, FNV_SIZE, VALUES);
}

#endif /* NU_WITH_TOUPPER */
