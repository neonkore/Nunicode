#ifndef NU_BUILD_CONFIG_H
#define NU_BUILD_CONFIG_H

#ifdef NU_WITH_EVERYTHING
#	define NU_WITH_UTF8
#	define NU_WITH_CESU8
#	define NU_WITH_UTF16
#	define NU_WITH_UTF32
#	define NU_WITH_STRINGS
#	define NU_WITH_EXTRA
#	define NU_WITH_REVERSE_READ
#	define NU_WITH_VALIDATION
#	define NU_WITH_COLLATION
#	define NU_WITH_CASEMAP
#endif /* NU_WITH_EVERYTHING */

#ifdef NU_WITH_UTF8
#	define NU_WITH_UTF8_READER
#	define NU_WITH_UTF8_WRITER
#endif /* NU_WITH_UTF8 */

#ifdef NU_WITH_CESU8
#	define NU_WITH_CESU8_READER
#	define NU_WITH_CESU8_WRITER
#endif /* NU_WITH_CESU8 */

#ifdef NU_WITH_UTF16LE
#	define NU_WITH_UTF16LE_READER
#	define NU_WITH_UTF16LE_WRITER
#endif /* NU_WITH_UTF16LE */

#ifdef NU_WITH_UTF16BE
#	define NU_WITH_UTF16BE_READER
#	define NU_WITH_UTF16BE_WRITER
#endif /* NU_WITH_UTF16BE */

#ifdef NU_WITH_UTF16
#	define NU_WITH_UTF16_READER
#	define NU_WITH_UTF16_WRITER
#endif /* NU_WITH_UTF16 */

#ifdef NU_WITH_UTF16_READER
#	define NU_WITH_UTF16LE_READER
#	define NU_WITH_UTF16BE_READER
#endif /* NU_WITH_UTF16_READER */

#ifdef NU_WITH_UTF16_WRITER
#	define NU_WITH_UTF16LE_WRITER
#	define NU_WITH_UTF16BE_WRITER
#endif /* NU_WITH_UTF16_WRITER */

#ifdef NU_WITH_UTF32
#	define NU_WITH_UTF32_READER
#	define NU_WITH_UTF32_WRITER
#endif /* NU_WITH_UTF32 */

#ifdef NU_WITH_UTF32_READER
#	define NU_WITH_UTF32LE_READER
#	define NU_WITH_UTF32BE_READER
#endif /* NU_WITH_UTF32_READER */

#ifdef NU_WITH_UTF32_WRITER
#	define NU_WITH_UTF32LE_WRITER
#	define NU_WITH_UTF32BE_WRITER
#endif /* NU_WITH_UTF32_WRITER */

#ifdef NU_WITH_STRINGS
#	define NU_WITH_Z_STRINGS
#	define NU_WITH_N_STRINGS
#endif /* NU_WITH_STRINGS */

#ifdef NU_WITH_EXTRA
#	define NU_WITH_Z_EXTRA
#	define NU_WITH_N_EXTRA
#endif /* NU_WITH_STRINGS */

#ifdef NU_WITH_COLLATION
#	define NU_WITH_Z_COLLATION
#	define NU_WITH_N_COLLATION
#endif /* NU_WITH_COLLATION */

#ifdef NU_WITH_CASEMAP
#	define NU_WITH_TOLOWER
#	define NU_WITH_TOUPPER
#endif /* NU_WITH_CASEMAP */

#if (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION)
#	define NU_WITH_DECOMPOSITION
#endif

#if (defined NU_WITH_Z_COLLATION) || (defined NU_WITH_N_COLLATION) \
|| (defined NU_WITH_TOLOWER) || (defined NU_WITH_TOUPPER)
#	define NU_WITH_UDB
#	define NU_WITH_UTF8_READER
#endif

#endif /* NU_BUILD_CONFIG_H */
