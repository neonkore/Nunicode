#ifndef NU_UTF16BE_H
#define NU_UTF16BE_H

#include <stdint.h>

#include "config.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UTF16BE_READER

/**
 * @ingroup utf16
 * @see nu_utf16le_read
 */
const char* nu_utf16be_read(const char *utf16, uint32_t *unicode);

#endif /* NU_WITH_UTF16BE_READER */

#ifdef NU_WITH_UTF16BE_WRITER

/**
 * @ingroup utf16
 * @see nu_utf16le_write
 */
char* nu_utf16be_write(uint32_t unicode, char *utf16);

#endif /* NU_WITH_UTF16BE_WRITER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UTF16BE_H */
