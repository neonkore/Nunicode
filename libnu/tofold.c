#include "casemap.h"

#ifdef NU_WITH_TOFOLD

#include "casemap_internal.h"
#include "gen/_tofold.c"

const char* nu_tofold(uint32_t codepoint) {
	return to_something(codepoint, NU_TOFOLD_G, NU_TOFOLD_G_SIZE,
		NU_TOFOLD_VALUES_C, NU_TOFOLD_VALUES_I, NU_TOFOLD_COMBINED);
}

#endif /* NU_WITH_TOFOLD */
