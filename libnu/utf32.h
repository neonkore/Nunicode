#ifndef NU_UTF32_H
#define NU_UTF32_H

#include <stdint.h>

#include "strings.h"
#include "validate.h"

/** @defgroup utf32 UTF-32 support
 */

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#if (defined NU_WITH_UTF32_READER) || (defined NU_WITH_UTF32_WRITER)
static const uint32_t NU_UTF32_BOM = 0; /** for sizeof() only */
#endif

typedef char* (*nu_utf32_write_bom_t)(char *);

#ifdef NU_WITH_UTF32_READER

typedef struct {
	nu_read_iterator_t read;
	nu_write_iterator_t write;
	nu_revread_iterator_t revread;
	nu_validread_iterator_t validread;
	nu_utf32_write_bom_t write_bom;
} nu_utf32_bom_t;

/**
 * @ingroup utf32
 * @see nu_utf16_read_bom
 */
const char* nu_utf32_read_bom(const char *encoded, nu_utf32_bom_t *bom);

#endif /* NU_WITH_UTF32_READER */

#ifdef NU_WITH_UTF32_WRITER

/**
 * @ingroup utf32
 * @see nu_utf16le_write_bom
 */
char* nu_utf32le_write_bom(char *encoded);

/**
 * @ingroup utf32
 * @see nu_utf16be_write_bom
 */
char* nu_utf32be_write_bom(char *encoded);

#endif /* NU_WITH_UTF32_WRITER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UTF32_H */
