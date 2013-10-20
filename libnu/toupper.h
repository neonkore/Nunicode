#ifndef NU_TOUPPER_H
#define NU_TOUPPER_H

#include <stdint.h>

#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_TOUPPER

const char* nu_toupper(uint32_t codepoint, nu_read_iterator_t *it);

#endif /* NU_WITH_TOUPPER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_TOUPPER_H */
