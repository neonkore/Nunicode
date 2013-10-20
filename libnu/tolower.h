#ifndef NU_TOLOWER_H
#define NU_TOLOWER_H

#include <stdint.h>

#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_TOLOWER

const char* nu_tolower(uint32_t codepoint, nu_read_iterator_t *it);

#endif /* NU_WITH_TOLOWER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_TOLOWER_H */
