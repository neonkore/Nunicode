#ifndef NU_CASEMAP_INTERNAL_H
#define NU_CASEMAP_INTERNAL_H

#include <stdint.h>
#include <sys/types.h>

#include "udb.h"
#include "utf8.h"

#if (defined NU_WITH_TOUPPER) || (defined NU_WITH_TOLOWER)

static const char* to_something(uint32_t codepoint, nu_read_iterator_t *it,
	const int16_t *G, size_t G_SIZE,
	const uint32_t *VALUES_C, const uint16_t *VALUES_I, const uint8_t *COMBINED) {

	const char *encoded = nu_udb_lookup(codepoint, it,
		G, G_SIZE, VALUES_C, VALUES_I, COMBINED);

	if (encoded == 0) {
		return 0;
	}

	return encoded;
}

#endif /* NU_WITH_TOUPPER || NU_WITH_TOLOWER */

#endif /* NU_CASEMAP_INTERNAL_H */
