#include "casemap.h"

#ifdef NU_WITH_TOLOWER

#include "casemap_internal.h"
#include "gen/_tolower.c"

const char* nu_tolower(uint32_t codepoint) {
	return to_something(codepoint, NU_TOLOWER_G, NU_TOLOWER_G_SIZE,
		NU_TOLOWER_VALUES_C, NU_TOLOWER_VALUES_I, NU_TOLOWER_COMBINED);
}

#endif /* NU_WITH_TOLOWER */
