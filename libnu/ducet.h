#ifndef NU_DUCET_H
#define NU_DUCET_H

#include <stdint.h>

#include "utf16le.h"
#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

typedef const char* (*nu_decompositor_t)(uint32_t codepoint, nu_read_iterator_t *it);

const char* nu_decompose(uint32_t codepoint, nu_read_iterator_t *it);

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_DUCET_H */
