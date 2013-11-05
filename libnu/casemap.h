#ifndef NU_TOUPPER_H
#define NU_TOUPPER_H

#include <stdint.h>

#include "config.h"
#include "defines.h"
#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

typedef nu_transformation_t nu_casemapping_t;

#ifdef NU_WITH_TOUPPER

/** Return uppercase value of codepoint
 *
 * @ingroup decompose
 * @param codepoint unicode codepoint
 * @param read output upper case read (decode) function
 * @return uppercase codepoint or same if mapping doesn't exist
 */
NU_EXPORT
const char* nu_toupper(uint32_t codepoint, nu_read_iterator_t *read);

#endif /* NU_WITH_TOUPPER */

#ifdef NU_WITH_TOLOWER

/** Return lowercase value of codepoint
 *
 * @ingroup decompose
 * @param codepoint unicode codepoint
 * @param read output lower case read (decode) function
 * @return lowercase codepoint or same if mapping doesn't exist
 */
NU_EXPORT
const char* nu_tolower(uint32_t codepoint, nu_read_iterator_t *read);

#endif /* NU_WITH_TOLOWER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_TOUPPER_H */
