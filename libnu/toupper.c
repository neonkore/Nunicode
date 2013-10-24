#include "casemap_internal.h"
#include "casemap.h"

#ifdef NU_WITH_TOUPPER

#include "gen/_toupper.h"

static const size_t FNV_SIZE = sizeof(FNV) / sizeof(*FNV);

uint32_t nu_toupper(uint32_t codepoint) {
	uint32_t ret = to_something(codepoint, FNV, FNV_SIZE, VALUES);
	return (ret == 0 ? codepoint : ret);
}

#endif /* NU_WITH_TOUPPER */
