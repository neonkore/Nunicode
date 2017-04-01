#include "casemap.h"

#ifdef NU_WITH_UNACCENT

#include "casemap_internal.h"
#include "gen/_tounaccent.c"

const char* nu_tounaccent(uint32_t codepoint) {
	return _nu_to_something(codepoint, NU_TOUNACCENT_G, NU_TOUNACCENT_G_SIZE,
		NU_TOUNACCENT_VALUES_C, NU_TOUNACCENT_VALUES_I, NU_TOUNACCENT_COMBINED);
}

const char* _nu_tounaccent(const char *encoded, const char *limit, nu_read_iterator_t read,
	uint32_t *u, const char **transform,
	void *context) {

	(void)(limit);
	(void)(context);

	uint32_t _u = 0;
	const char *np = read(encoded, &_u);

	*transform = nu_tounaccent(_u);

	if (u != 0) {
		*u = _u;
	}

	return np;
}

#endif /* NU_WITH_UNACCENT */
