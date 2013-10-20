#include "toupper.h"
#include "udb.h"

#include "gen/_toupper.h"

static const size_t FNV_SIZE = sizeof(FNV) / sizeof(*FNV);

const char* nu_toupper(uint32_t codepoint, nu_read_iterator_t *it) {
	return nu_udb_lookup(codepoint, it, FNV, FNV_SIZE, VALUES);
}
