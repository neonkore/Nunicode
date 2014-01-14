#ifndef NU_DUCET_H
#define NU_DUCET_H

#include <stdint.h>

#include "config.h"
#include "defines.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_DUCET

/** Get DUCET value of codepoint
 *
 * By default this function will return (uint32_t)(-1) for unknown codepoints,
 * hence putting all unknown characters to the end of the scale. Note that
 * nu_ducet_codepointcmp() is aware of it, but it work this around,
 * @see nu_ducet_codepointcmp
 *
 * @ingroup udb
 * @param codepoint codepoint
 * @return comparable weight of the codepoint or (uint32_t)(-1)
 */
NU_EXPORT
uint32_t nu_ducet_value(uint32_t codepoint);

/** DUCET-aware comparator
 *
 * Puts all known characters in DUCET order, and all unknown characters
 * in codepoint-order. Known characters are all letters and numbers,
 * unknown characters are not-letters and not-numbers: smileys, control
 * characters, etc.
 *
 * @see nu_codepointcmp_t
 */
NU_EXPORT
int nu_ducet_codepointcmp(uint32_t u1, uint32_t u2, int state);

#endif /* NU_WITH_DUCET */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_DUCET_H */
