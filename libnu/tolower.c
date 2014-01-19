#include "casemap.h"

#ifdef NU_WITH_TOLOWER

#include "casemap_internal.h"

#include "gen/_tolower.h"

static const size_t G_SIZE = sizeof(G) / sizeof(*G);

const char* nu_tolower(uint32_t codepoint, nu_read_iterator_t *read) {
	return to_something(codepoint, read,
		G, G_SIZE, VALUES_C, VALUES_I, COMBINED);
}

#endif /* NU_WITH_TOLOWER */
