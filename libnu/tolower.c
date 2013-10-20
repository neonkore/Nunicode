#include "tolower.h"
#include "udb.h"

#include "gen/_tolower.h"

static const size_t FNV_SIZE = sizeof(FNV) / sizeof(*FNV);

const char* nu_tolower(uint32_t codepoint, nu_read_iterator_t *it) {
	return nu_udb_lookup(codepoint, it, FNV, FNV_SIZE, VALUES);
}
