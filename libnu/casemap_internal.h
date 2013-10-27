#ifndef NU_CASEMAP_INTERNAL_H
#define NU_CASEMAP_INTERNAL_H

#include <stdint.h>
#include <sys/types.h>

#include "udb.h"
#include "utf8.h"

#if (defined NU_WITH_TOUPPER) || (defined NU_WITH_TOLOWER)

static uint32_t to_something(uint32_t codepoint,
	nu_fnv_table_t *FNV, size_t FNV_SIZE, const nu_udb_t *VALUES) {

	nu_read_iterator_t it = 0;
	const char *encoded = nu_udb_lookup(codepoint, &it, FNV, FNV_SIZE, VALUES);
	if (encoded == 0) {
		return 0;
	}

	uint32_t u = 0;
	it(encoded, &u);

	return u;
}

#endif /* NU_WITH_TOUPPER || NU_WITH_TOLOWER */

#endif /* NU_CASEMAP_INTERNAL_H */
