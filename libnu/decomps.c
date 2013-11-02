#include "decomps.h"
#include "udb.h"

#ifdef NU_WITH_DECOMPOSITION

#include "gen/_decomps.h"

static const size_t FNV_SIZE = sizeof(FNV) / sizeof(*FNV);

const char* nu_decompose(uint32_t codepoint, nu_read_iterator_t *it) {
	return nu_udb_lookup(codepoint, it, FNV, FNV_SIZE, VALUES);
}

#endif /* NU_WITH_DECOMPOSITION */
