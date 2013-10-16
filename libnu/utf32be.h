#ifndef NU_UTF32BE_H
#define NU_UTF32BE_H

#include <stdint.h>
#include <sys/types.h>

#include "config.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

#ifdef NU_WITH_UTF32BE_READER

/**
 * @ingroup utf32
 * @see nu_utf16be_read
 */
const char* nu_utf32be_read(const char *utf32, uint32_t *unicode);

#ifdef NU_WITH_REVERSE_READ

/*
 * @ingroup utf32
 * @see nu_utf16be_revread
 */
const char* nu_utf32be_revread(uint32_t *unicode, const char *utf32);

#endif /* NU_WITH_REVERSE_READ */

#ifdef NU_WITH_VALIDATION

/**
 * @ingroup utf32
 * @see nu_utf16be_validread
 */
int nu_utf32be_validread(const char *p, size_t max_len);

#endif /* NU_WITH_VALIDATION */
#endif /* NU_WITH_UTF32BE_READER */

#ifdef NU_WITH_UTF32BE_WRITER

/**
 * @ingroup utf32
 * @see nu_utf16be_write
 */
char* nu_utf32be_write(uint32_t unicode, char *utf32);

#endif /* NU_WITH_UTF32BE_WRITER */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_UTF32BE_H */
