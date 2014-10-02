#include "casemap.h"

#ifdef NU_WITH_TOUPPER

#include "casemap_internal.h"
#include "gen/_toupper.c"

const char* nu_toupper(uint32_t codepoint) {
	return to_something(codepoint, NU_TOUPPER_G, NU_TOUPPER_G_SIZE,
		NU_TOUPPER_VALUES_C, NU_TOUPPER_VALUES_I, NU_TOUPPER_COMBINED);
}

#endif /* NU_WITH_TOUPPER */
