#ifndef NU_TOUPPER_H
#define NU_TOUPPER_H

#include <stdint.h>

#include "config.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

typedef uint32_t (*nu_casemapping_t)(uint32_t);

#ifdef NU_WITH_TOUPPER

/** Return uppercase value of codepoint
 *
 * @ingroup collation
 * @param codepoint unicode codepoint
 * @return uppercase codepoint or same if mapping doesn't exist
 */
uint32_t nu_toupper(uint32_t codepoint);

#endif /* NU_WITH_TOUPPER */

#ifdef NU_WITH_TOLOWER

/** Return lowercase value of codepoint
 *
 * @ingroup collation
 * @param codepoint unicode codepoint
 * @return lowercase codepoint or same if mapping doesn't exist
 */
uint32_t nu_tolower(uint32_t codepoint);

#endif /* NU_WITH_TOLOWER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_TOUPPER_H */
