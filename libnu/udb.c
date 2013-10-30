#include "fnv.h"
#include "udb.h"
#include "utf8.h"

#ifdef NU_WITH_UDB

static const nu_read_iterator_t udb_decoding_function = nu_utf8_read;

const char* nu_udb_lookup(uint32_t codepoint, nu_read_iterator_t *it,
	nu_fnv_table_t *FNV, size_t FNV_SIZE, const nu_udb_t *VALUES) {

	uint32_t hash = fnv_hash(FNV, FNV_SIZE, codepoint);
	const char* data = fnv_lookup(VALUES, codepoint, hash);

	if (data != 0 && it != 0) {
		*it = udb_decoding_function;
	}

	return data;
}

#endif /* NU_WITH_UDB */
