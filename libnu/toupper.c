#include "casemap.h"

#ifdef NU_WITH_TOUPPER

#include "casemap_internal.h"

#include "gen/_toupper.h"

static const size_t G_SIZE = sizeof(G) / sizeof(*G);

const char* nu_toupper(uint32_t codepoint) {
	return to_something(codepoint, G, G_SIZE, VALUES_C, VALUES_I, COMBINED);
}

#endif /* NU_WITH_TOUPPER */
