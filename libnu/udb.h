#ifndef NU_UDB_H
#define NU_UDB_H

#include <stdint.h>
#include <sys/types.h>

#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

typedef struct {
	uint32_t codepoint;
	const char *data; /* UTF-16LE encoded */
} nu_udb_t;

const char* nu_udb_lookup(uint32_t codepoint, nu_read_iterator_t *it,
	const uint16_t *FNV, size_t FNV_SIZE, const nu_udb_t **VALUES);

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UDB_H */
