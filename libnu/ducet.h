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
 * hence putting all unknown characters (not letters and not numbers) to the 
 * end of the list.
 *
 * @ingroup udb
 * @param codepoint codepoint
 * @param weight previous weight for compound weight (not used here)
 * @param context pointer passed to nu_strcoll()
 * @return comparable weight of the codepoint or (uint32_t)(-1)
 */
NU_EXPORT
int32_t nu_ducet_weight(uint32_t codepoint, int32_t *weight, void *context);

#endif /* NU_WITH_DUCET */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_DUCET_H */
