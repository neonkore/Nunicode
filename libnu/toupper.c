#include "casemap.h"

#ifdef NU_WITH_TOUPPER

#include "casemap_internal.h"
#include "gen/_toupper.c"

const char* nu_toupper(uint32_t codepoint) {
	return _nu_to_something(codepoint, NU_TOUPPER_G, NU_TOUPPER_G_SIZE,
		NU_TOUPPER_VALUES_C, NU_TOUPPER_VALUES_I, NU_TOUPPER_COMBINED);
}

const char* _nu_toupper(const char *encoded, const char *limit, nu_read_iterator_t read, void *context) {
	(void)(limit);
	(void)(context);

	uint32_t u = 0;
	read(encoded, &u);

	return nu_toupper(u);
}

#endif /* NU_WITH_TOUPPER */
