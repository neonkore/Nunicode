#ifndef NU_UTF32LE_H
#define NU_UTF32LE_H

#include <stdint.h>

#include "config.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UTF32LE_READER

/**
 * @ingroup utf32
 * @see nu_utf16le_read
 */
const char* nu_utf32le_read(const char *utf32, uint32_t *unicode);

#ifdef NU_WITH_REVERSE_READ

/*
 * @ingroup utf32
 * @see nu_utf16le_revread
 */
const char* nu_utf32le_revread(uint32_t *unicode, const char *utf32);

#endif /* NU_WITH_REVERSE_READ */
#endif /* NU_WITH_UTF32LE_READER */

#ifdef NU_WITH_UTF32LE_WRITER

/**
 * @ingroup utf32
 * @see nu_utf16le_write
 */
char* nu_utf32le_write(uint32_t unicode, char *utf32);

#endif /* NU_WITH_UTF32LE_WRITER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UTF32LE_H */
