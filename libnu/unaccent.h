#ifndef NU_UNACCENT_H
#define NU_UNACCENT_H

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UNACCENT

const char* nu_tounaccent(uint32_t codepoint);
const char* _nu_tounaccent(const char *encoded, const char *limit, nu_read_iterator_t read,
	uint32_t *u, const char **transform,
	void *context);

#endif /* NU_WITH_UNACCENT */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UNACCENT_H */
