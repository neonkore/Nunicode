#include "casemap_internal.h"
#include "casemap.h"

#ifdef NU_WITH_TOLOWER

#include "gen/_tolower.h"

static const size_t FNV_SIZE = sizeof(FNV) / sizeof(*FNV);

const char* nu_tolower(uint32_t codepoint, nu_read_iterator_t *read) {
	return to_something(codepoint, read, FNV, FNV_SIZE, VALUES, COMBINED);
}

#endif /* NU_WITH_TOLOWER */
