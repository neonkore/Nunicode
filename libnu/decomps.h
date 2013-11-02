#ifndef NU_DECOMPS_H
#define NU_DECOMPS_H

/** @defgroup decompose Decompositing
 */

#include <stdint.h>

#include "config.h"
#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

/** Decompose codepoint
 *
 * @ingroup decompose
 * @see nu_decompose
 */
typedef const char* (*nu_decompositor_t)(uint32_t codepoint, nu_read_iterator_t *it);

#ifdef NU_WITH_DECOMPOSITION

/** Produce DUCET-like character decomposition
 *
 * This decomposition is only similar to DUCET in some parts,
 * generally it's decomp with <noBreak>, <narrow>, <wide>, <sort> and so
 * included into it, but there are no compatibility decomposition:
 * no superscript or subscript transformation. It is used only for strings
 * collation.
 *
 * @param codepoint unicode codepoint
 * @param it read function to fetch decomposed codepoints
 * @return encoded decomposed codepoints
 */
const char* nu_decompose(uint32_t codepoint, nu_read_iterator_t *it);

#endif /* NU_WITH_DECOMPOSITION */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_DECOMPS_H */
