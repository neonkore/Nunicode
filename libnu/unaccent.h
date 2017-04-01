#ifndef NU_UNACCENT_H
#define NU_UNACCENT_H

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UNACCENT

const char* nu_tounaccent(uint32_t codepoint);

#endif /* NU_WITH_UNACCENT */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UNACCENT_H */
