#ifndef NU_DUCET_H
#define NU_DUCET_H

#include <stdint.h>

#include "config.h"

#ifdef NU_WITH_DUCET

NU_EXPORT
unit32_t nu_ducet_value(uint32_t codepoint);

NU_EXPORT
int nu_ducet_codepointcmp(uint32_t u1, uint32_t u2);

#endif /* NU_WITH_DUCET */
#endif /* NU_DUCET_H */
