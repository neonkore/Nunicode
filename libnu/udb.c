#include "fnv.h"
#include "udb.h"
#include "utf8.h"

#ifdef NU_WITH_UDB

static const nu_read_iterator_t udb_decoding_function = nu_utf8_read;

const char* nu_udb_lookup(uint32_t codepoint, nu_read_iterator_t *it,
	nu_fnv_table_t *FNV, size_t FNV_SIZE, const nu_udb_t *VALUES, const uint8_t *COMBINED) {

	uint32_t hash = fnv_hash(FNV, FNV_SIZE, codepoint);
	uint32_t combined_offset = fnv_lookup(VALUES, codepoint, hash);

	if (combined_offset == 0) {
		return 0;
	}

	if (it != 0) {
		*it = udb_decoding_function;
	}

	return (const char *)(COMBINED + combined_offset);
}

#endif /* NU_WITH_UDB */
