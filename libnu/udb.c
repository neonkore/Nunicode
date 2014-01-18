#include "mph.h"
#include "udb.h"
#include "utf8.h"

#ifdef NU_WITH_UDB

static const nu_read_iterator_t udb_decoding_function = nu_utf8_read;

uint32_t nu_udb_lookup_value(uint32_t codepoint,
	nu_fnv_table_t *G, size_t G_SIZE,
	const uint32_t *VALUES_C, const uint16_t *VALUES_I) {

	uint32_t hash = mph_hash(G, G_SIZE, codepoint);
	uint32_t value = mph_lookup(VALUES_C, VALUES_I, codepoint, hash);

	return value;
}

const char* nu_udb_lookup(uint32_t codepoint, nu_read_iterator_t *it,
	nu_fnv_table_t *G, size_t G_SIZE,
	const uint32_t *VALUES_C, const uint16_t *VALUES_I, const uint8_t *COMBINED) {

	uint32_t combined_offset = nu_udb_lookup_value(codepoint,
		G, G_SIZE, VALUES_C, VALUES_I);

	if (combined_offset == 0) {
		return 0;
	}

	if (it != 0) {
		*it = udb_decoding_function;
	}

	return (const char *)(COMBINED + combined_offset);
}

#endif /* NU_WITH_UDB */
