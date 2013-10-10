#ifndef NU_ITERATORS_H
#define NU_ITERATORS_H

#include <stdint.h>

#include "build_config.h"

#ifdef NU_WITH_ITERATORS

typedef const char* (*nu_read_iterator)(const char *encoded, uint32_t *unicode);
typedef char* (*nu_write_iterator)(uint32_t unicode, char *encoded);

int nu_read_str(const char *encoded, uint32_t *unicode, nu_read_iterator it);
int nu_write_str(const uint32_t *unicode, char *encoded, nu_write_iterator it);

#endif /* NU_WITH_ITERATORS */

#endif /* NU_ITERATORS_H */
