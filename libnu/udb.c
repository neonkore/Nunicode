#include "fnv.h"
#include "udb.h"
#include "utf16le.h"

const char* nu_udb_lookup(uint32_t codepoint, nu_read_iterator_t *it,
	const uint16_t *FNV, size_t FNV_SIZE, const nu_udb_t ** VALUES) {

	uint32_t hash = fnv_hash(FNV, FNV_SIZE, codepoint);
 	const char* data = fnv_lookup(VALUES, codepoint, hash);

	if (data != 0 && it != 0) {
		*it = nu_utf16le_read;
	}

	return data;
}
