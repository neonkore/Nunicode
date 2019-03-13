#include <assert.h>
#include <stdio.h>

#include <libnu/config.h>
#include <libnu/libnu.h>
#include <libnu/strcoll_internal.h>

#include "nusqlite3.h"
#include "version.h"

/** This extension provide functions for the following statements:
 *
 * - X LIKE Y ESCAPE Z
 * - upper(X)
 * - lower(X)
 * - unaccent(X)
 * - COLLATE NU1200 (or as defined in COLLATION_NAME) - Unicode 12.0.0 case-sensitive collation
 * - COLLATE NU1200_NOCASE (or as defined in NOCASE_COLLATION_NAME) - Unicode 12.0.0 case-insensitive collation
 *
 * Supported encodings:
 *
 * - UTF8
 * - UTF16LE
 * - UTF16BE
 * - UTF16 (nunicode encoding: UTF-16HE)
 */

/* Use defines to specify the names of the collations nunicode registers with SQLite.
 */
#ifndef COLLATION_NAME
# ifdef NU_SQLITE_COLLATION_NAME
#  define COLLATION_NAME NU_SQLITE_COLLATION_NAME
# else
#  warning "Use of NUCURRENT collation with indices might result in undefined behavior after version switch"
#  define COLLATION_NAME "NUCURRENT"
# endif /* NU_SQLITE_COLLATION_NAME */
#endif /* COLLATION_NAME */

#ifndef NOCASE_COLLATION_NAME
# ifdef NU_SQLITE_NOCASE_COLLATION_NAME
#  define NOCASE_COLLATION_NAME NU_SQLITE_NOCASE_COLLATION_NAME
# else
#  define NOCASE_COLLATION_NAME COLLATION_NAME "_NOCASE"
# endif /* NU_SQLITE_NOCASE_COLLATION_NAME */
#endif /* NOCASE_COLLATION_NAME */

/* This option is supposed to match SQLITE_OMIT_UTF16 used in SQLite3 build.
 * It's also set if either NU_WITH_UTF16 or NU_WITH_UTF16HE weren't set in libnu build.
 * Could also be set manually.
 */
#if !defined(NU_WITH_UTF16) || !defined(NU_WITH_UTF16HE)
# ifndef NU_SQLITE_OMIT_UTF16
#  warning "UTF16 support was omitted due to libnu build flags. Please consider setting NU_SQLITE_OMIT_UTF16 explicitly."
#  define NU_SQLITE_OMIT_UTF16
# endif
#endif

#ifdef _WIN32
# define NU_SQLITE3_EXPORT __declspec(dllexport)
#else
# define NU_SQLITE3_EXPORT
#endif

#ifndef NU_DYNAMIC_EXTENSION
/* Has to be defined before #include <sqlite3ext.h>
 * Reference: https://trac.osgeo.org/gdal/ticket/5725#comment:14
 */
struct sqlite3;
int sqlite3_auto_extension(void (*)(void));

NU_SQLITE3_EXPORT
int sqlite3_nunicode_init(struct sqlite3 *db, char **err_msg, const void *api);

void nunicode_sqlite3_static_init(int verbose) {
	sqlite3_auto_extension((void (*)(void))(sqlite3_nunicode_init));

	if (verbose != 0) {
		fprintf(stderr, "nunicode version: %s\n", NU_VERSION);
		fprintf(stderr, "nunicode unicode: %04d\n", NU_UNICODE_VERSION);
		fprintf(stderr, "nunicode sqlite3 extension: %s\n", NU_SQLITE3_EXT_VERSION);
	}
}
#endif /* NU_DYNAMIC_EXTENSION */

#include <sqlite3ext.h>
SQLITE_EXTENSION_INIT1

/** Buffer of this size will be allocated on *stack* to support
 * upper()/lower() transformations internally. Internal buffer
 * for strings longer than this will be allocated in *heap*.
 *
 * You can adjust this value to enable handling of longer strings
 * on stack.
 */
#define FAST_BUFFER_SIZE 4096 /* bytes */

/** This LIKE implementation is intended to do proper collation as
 * opposed to doing strcmp() on strings by comparing each codepoint.
 *
 * _nunicode_like exploits the fact that the same approach is
 * implemented in nu_strcasestr() therefore LIKE is a serie of
 * nu_strcasestr() performed on haystack and needles extracted from
 * "%needle%", "needle_needle%needle" and so
 *
 * Generally nunicode support different encodings for lhs and rhs,
 * but in this implementation lhs_read is always equal to rhs_read
 *
 * @param lhs left-hand-side of lhs LIKE rhs expression
 * @param rhs right-hand-size of lhs LIKE rhs expression
 * @param escape escape codepoint
 * @param lhs_read lhs read (decode) function
 * @param rhs_read rhs read (decode) function
 * @return 0 or 1
 */
#ifdef NU_DYNAMIC_EXTENSION
static
#endif
int _nunicode_like(const char *lhs, const char *rhs, uint32_t escape,
	nu_read_iterator_t lhs_read, nu_read_iterator_t rhs_read) {

	const char *lp = lhs;
	const char *rp = rhs;
	const char *ltailp = 0, *rtailp = 0;
	uint32_t lu = (uint32_t)(-1), ru = lu;

	char prev_escape = 0;

	uint32_t needle_start = (uint32_t)(-1);
	while (ru != 0 && lu != 0) {
		rp = nu_nocase_compound_read(rp, NU_UNLIMITED, rhs_read, &ru, &rtailp);
		if (needle_start == (uint32_t)(-1)) {
			needle_start = ru; /* if needle starts with %, then search might be repeated on fail */
		}

		if (ru == '%' && prev_escape == 0) {
			while (ru == '%' || ru == '_') {
				rp = nu_nocase_compound_read(rp, NU_UNLIMITED, rhs_read, &ru, &rtailp);
				if (ru == '_') {
					if (lu == 0) {
						return 0;
					}
					/* skip one codepoint in lhs */
					lp = nu_nocase_compound_read(lp, NU_UNLIMITED, lhs_read, &lu, &ltailp);
				}
			}

			/* find left hand side matching codepoint */
			lu = (uint32_t)(-1);
			while (lu != ru) {
				if (lu == 0) {
					return 0;
				}
				lp = nu_nocase_compound_read(lp, NU_UNLIMITED, lhs_read, &lu, &ltailp);
			}

			/* at this point lu must be equal to ru,
			 * otherwise first codepoint in needle wasn't found */
			if (ru != lu) {
				return 0;
			}

			continue;
		}
		else if (ru == '_' && prev_escape == 0) {
			if (lu == 0) {
				return 0;
			}

			lp = nu_nocase_compound_read(lp, NU_UNLIMITED, lhs_read, &lu, &ltailp);
			continue;
		}
		else if (escape != 0 && ru == escape) {
			prev_escape = 1;
			continue;
		}

		const char *tmp_lp = lp;
		const char *tmp_ltailp = ltailp;
		lp = nu_nocase_compound_read(lp, NU_UNLIMITED, lhs_read, &lu, &ltailp);

		if (lu != ru) {
			/* if match wasn't found - restart from lp,
			 * needle might appear later in string */
			if (needle_start == '%') {
				rp = rhs;
				prev_escape = 0;
				/* rollback to previous codepoint of lhs (haystack) */
				lp = tmp_lp;
				ltailp = tmp_ltailp;
				continue;
			}
			else {
				return 0;
			}
		}

		prev_escape = 0;
	}

	return (lu == ru ? 1 : 0);
}

/** SQLite-nu bridge
 */
static void _nunicode_sqlite3_like(sqlite3_context *context,
	int argc, sqlite3_value **argv, nu_read_iterator_t it) {

	if (sqlite3_value_type(argv[0]) != SQLITE_TEXT
	|| sqlite3_value_type(argv[1]) != SQLITE_TEXT) {
		sqlite3_result_int(context, 0);
		return;
	}

	const char *lhs = (const char *)sqlite3_value_text(argv[1]);
	const char *rhs = (const char *)sqlite3_value_text(argv[0]);
	uint32_t escape = 0;

	if (argc == 3) {
		if (sqlite3_value_type(argv[2]) != SQLITE_TEXT) {
			sqlite3_result_int(context, 0);
			return;
		}

		const char *escape_str = (const char *)sqlite3_value_text(argv[2]);
		ssize_t escape_str_len = nu_strlen(escape_str, it);
		if (escape_str_len != 1) {
			sqlite3_result_int(context, 0);
			return;
		}

		it(escape_str, &escape);
	}

	int ret = 0;
	if (lhs != 0 && rhs != 0) {
		ret = _nunicode_like(lhs, rhs, escape, it, it);
	}

	sqlite3_result_int(context, ret);
}

static void nunicode_sqlite3_like_utf8(sqlite3_context *context, int argc, sqlite3_value **argv) {
	_nunicode_sqlite3_like(context, argc, argv, nu_utf8_read);
}

#ifndef NU_SQLITE_OMIT_UTF16
static void nunicode_sqlite3_like_utf16le(sqlite3_context *context, int argc, sqlite3_value **argv) {
	_nunicode_sqlite3_like(context, argc, argv, nu_utf16le_read);
}

static void nunicode_sqlite3_like_utf16be(sqlite3_context *context, int argc, sqlite3_value **argv) {
	_nunicode_sqlite3_like(context, argc, argv, nu_utf16be_read);
}

static void nunicode_sqlite3_like_utf16he(sqlite3_context *context, int argc, sqlite3_value **argv) {
	_nunicode_sqlite3_like(context, argc, argv, nu_utf16he_read);
}
#endif /* NU_SQLITE_OMIT_UTF16 */

static int _nunicode_collate(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len, nu_read_iterator_t it) {
	return nu_strncoll(s1, s1_max_len, s2, s2_max_len, it, it);
}

static int nunicode_sqlite3_collate_utf8(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate(s1, s1_len, s2, s2_len, nu_utf8_read);
}

#ifndef NU_SQLITE_OMIT_UTF16
static int nunicode_sqlite3_collate_utf16le(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate(s1, s1_len, s2, s2_len, nu_utf16le_read);
}

static int nunicode_sqlite3_collate_utf16be(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate(s1, s1_len, s2, s2_len, nu_utf16be_read);
}

static int nunicode_sqlite3_collate_utf16he(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate(s1, s1_len, s2, s2_len, nu_utf16he_read);
}
#endif /* NU_SQLITE_OMIT_UTF16 */

/** Case-insensitive strings collation
 *
 * This is full Unicode collation when "Maße" matches "MASSE". Also note that
 * while nunicode support different encodings for s1 and s2, same encoding is
 * used in SQLite extension.
 *
 * Internally, folding method is nu_toupper()
 *
 * @see _nunicode_collate
 * @see nu_tolower
 * @see nu_toupper
 */
static int _nunicode_collate_nocase(const char *s1, size_t s1_max_len,
	const char *s2, size_t s2_max_len, nu_read_iterator_t it) {
	return nu_strcasencoll(s1, s1_max_len, s2, s2_max_len, it, it);
}

static int nunicode_sqlite3_collate_nocase_utf8(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate_nocase(s1, s1_len, s2, s2_len, nu_utf8_read);
}

#ifndef NU_SQLITE_OMIT_UTF16
static int nunicode_sqlite3_collate_nocase_utf16le(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate_nocase(s1, s1_len, s2, s2_len, nu_utf16le_read);
}

static int nunicode_sqlite3_collate_nocase_utf16be(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate_nocase(s1, s1_len, s2, s2_len, nu_utf16be_read);
}

static int nunicode_sqlite3_collate_nocase_utf16he(void *context, int s1_len, const void *s1,
	int s2_len, const void *s2) {
	(void)(context);
	return _nunicode_collate_nocase(s1, s1_len, s2, s2_len, nu_utf16he_read);
}
#endif /* NU_SQLITE_OMIT_UTF16 */

/** This is implementation of full Unicode case mapping when string might
 * change length after transformed. E.g. upper("Maße") -> "MASSE".
 *
 * To transform string two passes required:
 *
 *   1. Decode string into Unicode codepoints + apply casemapping
 *   2. Re-encode casemapped string
 *
 * 1 and 2 share uint32_t buffer with decoded string internally. To reduce
 * number of allocations in heap, if string is shorter than FAST_BUFFER_SIZE
 * internal buffer will be allocated on stack. You can adjust this value to
 * handle longer strings also on stack.
 */
#ifdef NU_DYNAMIC_EXTENSION
static
#endif
char* _nunicode_casemapping(const char *encoded, nu_casemapping_t casemap,
	nu_read_iterator_t read, nu_write_iterator_t write,
	nu_sqlite3_ext_alloc_t nu_sqlite3_ext_alloc) {

	uint32_t fast_buffer[FAST_BUFFER_SIZE];
	uint32_t *unicode_buffer = fast_buffer;

	ssize_t unicode_len = nu_strtransformlen(encoded, read,
		casemap, nu_casemap_read);

	if (unicode_len >= FAST_BUFFER_SIZE - 1) {
		unicode_buffer = nu_sqlite3_ext_alloc(sizeof(*unicode_buffer) * (unicode_len + 1));
	}

	uint32_t u;
	unsigned i = 0;
	while (1) {
		encoded = read(encoded, &u);

		const char *map = casemap(u);

		if (map != 0) {
			uint32_t mu;
			while (1) {
				map = nu_casemap_read(map, &mu);

				if (mu == 0) {
					break;
				}

				unicode_buffer[i] = mu;
				++i;
			}
		}
		else {
			unicode_buffer[i] = u;
			++i;
		}

		if (u == 0) {
			break;
		}
	}

	ssize_t reencoded_len = nu_bytelen(unicode_buffer, write);
	char *reencoded = nu_sqlite3_ext_alloc(reencoded_len + 1);

	nu_writestr(unicode_buffer, reencoded, write);

	if (unicode_buffer != fast_buffer) {
		sqlite3_free(unicode_buffer);
	}

	return reencoded;
}

static void nunicode_sqlite3_casemapping_utf8(sqlite3_context *context, int argc, sqlite3_value **argv,
	nu_casemapping_t casemap) {
	if (argc < 1 || sqlite3_value_type(argv[0]) != SQLITE_TEXT) {
		sqlite3_result_null(context);
		return;
	}

	const char *lower = (const char *)sqlite3_value_text(argv[0]);
	char *upper = _nunicode_casemapping(lower, casemap,
		nu_utf8_read, nu_utf8_write, sqlite3_malloc);

	sqlite3_result_text(context, upper, -1, sqlite3_free);
}

#ifndef NU_SQLITE_OMIT_UTF16
static void nunicode_sqlite3_casemapping_utf16le(sqlite3_context *context, int argc, sqlite3_value **argv,
	nu_casemapping_t casemap) {
	if (argc < 1 || sqlite3_value_type(argv[0]) != SQLITE_TEXT) {
		sqlite3_result_null(context);
		return;
	}

	const char *lower = (const char *)sqlite3_value_text(argv[0]);
	char *upper = _nunicode_casemapping(lower, casemap,
		nu_utf16le_read, nu_utf16le_write, sqlite3_malloc);

	sqlite3_result_text16le(context, upper, -1, sqlite3_free);
}

static void nunicode_sqlite3_casemapping_utf16be(sqlite3_context *context, int argc, sqlite3_value **argv,
	nu_casemapping_t casemap) {
	if (argc < 1 || sqlite3_value_type(argv[0]) != SQLITE_TEXT) {
		sqlite3_result_null(context);
		return;
	}

	const char *lower = (const char *)sqlite3_value_text(argv[0]);
	char *upper = _nunicode_casemapping(lower, casemap,
		nu_utf16be_read, nu_utf16be_write, sqlite3_malloc);

	sqlite3_result_text16be(context, upper, -1, sqlite3_free);
}

static void nunicode_sqlite3_casemapping_utf16he(sqlite3_context *context, int argc, sqlite3_value **argv,
	nu_casemapping_t casemap) {
	if (argc < 1 || sqlite3_value_type(argv[0]) != SQLITE_TEXT) {
		sqlite3_result_null(context);
		return;
	}

	const char *lower = (const char *)sqlite3_value_text(argv[0]);
	char *upper = _nunicode_casemapping(lower, casemap,
		nu_utf16he_read, nu_utf16he_write, sqlite3_malloc);

	sqlite3_result_text16(context, upper, -1, sqlite3_free);
}
#endif /* NU_SQLITE_OMIT_UTF16 */

static void nunicode_sqlite3_upper_utf8(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf8(context, argc, argv, nu_toupper);
}

#ifndef NU_SQLITE_OMIT_UTF16
static void nunicode_sqlite3_upper_utf16le(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf16le(context, argc, argv, nu_toupper);
}

static void nunicode_sqlite3_upper_utf16be(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf16be(context, argc, argv, nu_toupper);
}

static void nunicode_sqlite3_upper_utf16he(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf16he(context, argc, argv, nu_toupper);
}
#endif /* NU_SQLITE_OMIT_UTF16 */

static void nunicode_sqlite3_lower_utf8(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf8(context, argc, argv, nu_tolower);
}

#ifndef NU_SQLITE_OMIT_UTF16
static void nunicode_sqlite3_lower_utf16le(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf16le(context, argc, argv, nu_tolower);
}

static void nunicode_sqlite3_lower_utf16be(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf16be(context, argc, argv, nu_tolower);
}

static void nunicode_sqlite3_lower_utf16he(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf16he(context, argc, argv, nu_tolower);
}
#endif /* NU_SQLITE_OMIT_UTF16 */

static void nunicode_sqlite3_unaccent_utf8(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf8(context, argc, argv, nu_tounaccent);
}

#ifndef NU_SQLITE_OMIT_UTF16
static void nunicode_sqlite3_unaccent_utf16le(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf16le(context, argc, argv, nu_tounaccent);
}

static void nunicode_sqlite3_unaccent_utf16be(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf16be(context, argc, argv, nu_tounaccent);
}

static void nunicode_sqlite3_unaccent_utf16he(sqlite3_context *context, int argc, sqlite3_value **argv) {
	nunicode_sqlite3_casemapping_utf16he(context, argc, argv, nu_tounaccent);
}
#endif /* NU_SQLITE_OMIT_UTF16 */

#define REGISTER_LIKE(rc, db, sqlite_encoding, nu_wrapper) \
	(rc) = sqlite3_create_function((db), "like", 2, (sqlite_encoding), 0, \
	(nu_wrapper), 0, 0); \
	if ((rc) != SQLITE_OK) return rc;

#define REGISTER_COLLATION(rc, db, sqlite_encoding, name, nu_wrapper) \
	(rc) = sqlite3_create_collation((db), (name), (sqlite_encoding), 0, \
	(nu_wrapper)); \
	if ((rc) != SQLITE_OK) return rc;

#define REGISTER_UPPER(rc, db, sqlite_encoding, nu_wrapper) \
	(rc) = sqlite3_create_function((db), "upper", 1, (sqlite_encoding), 0, \
	(nu_wrapper), 0, 0); \
	if ((rc) != SQLITE_OK) return rc;

#define REGISTER_LOWER(rc, db, sqlite_encoding, nu_wrapper) \
	(rc) = sqlite3_create_function((db), "lower", 1, (sqlite_encoding), 0, \
	(nu_wrapper), 0, 0); \
	if ((rc) != SQLITE_OK) return rc;

#define REGISTER_UNACCENT(rc, db, sqlite_encoding, nu_wrapper) \
	(rc) = sqlite3_create_function((db), "unaccent", 1, (sqlite_encoding), 0, \
	(nu_wrapper), 0, 0); \
	if ((rc) != SQLITE_OK) return rc;

NU_SQLITE3_EXPORT
int sqlite3_nunicode_init(sqlite3 *db, char **err_msg, const void *api) {
	(void)(err_msg);

	const sqlite3_api_routines *papi = (const sqlite3_api_routines *)(api);
	SQLITE_EXTENSION_INIT2(papi);

	int rc = SQLITE_OK;

	/* each macro would exit(rc); in case of error */

	REGISTER_LIKE(rc, db, SQLITE_UTF8, nunicode_sqlite3_like_utf8);
#ifndef NU_SQLITE_OMIT_UTF16
	REGISTER_LIKE(rc, db, SQLITE_UTF16LE, nunicode_sqlite3_like_utf16le);
	REGISTER_LIKE(rc, db, SQLITE_UTF16BE, nunicode_sqlite3_like_utf16be);
	REGISTER_LIKE(rc, db, SQLITE_UTF16, nunicode_sqlite3_like_utf16he);
#endif /* NU_SQLITE_OMIT_UTF16 */

/* this is to detect version change and suggest corresponding update in SQLite's collation name */
#if NU_UNICODE_VERSION != 1200
# error "nunicode collations are intended for Unicode 12.0.0 only"
#endif

	REGISTER_COLLATION(rc, db, SQLITE_UTF8, COLLATION_NAME, nunicode_sqlite3_collate_utf8);
#ifndef NU_SQLITE_OMIT_UTF16
	REGISTER_COLLATION(rc, db, SQLITE_UTF16LE, COLLATION_NAME, nunicode_sqlite3_collate_utf16le);
	REGISTER_COLLATION(rc, db, SQLITE_UTF16BE, COLLATION_NAME, nunicode_sqlite3_collate_utf16be);
	REGISTER_COLLATION(rc, db, SQLITE_UTF16, COLLATION_NAME, nunicode_sqlite3_collate_utf16he);
#endif /* NU_SQLITE_OMIT_UTF16 */

	REGISTER_COLLATION(rc, db, SQLITE_UTF8, NOCASE_COLLATION_NAME, nunicode_sqlite3_collate_nocase_utf8);
#ifndef NU_SQLITE_OMIT_UTF16
	REGISTER_COLLATION(rc, db, SQLITE_UTF16LE, NOCASE_COLLATION_NAME, nunicode_sqlite3_collate_nocase_utf16le);
	REGISTER_COLLATION(rc, db, SQLITE_UTF16BE, NOCASE_COLLATION_NAME, nunicode_sqlite3_collate_nocase_utf16be);
	REGISTER_COLLATION(rc, db, SQLITE_UTF16, NOCASE_COLLATION_NAME, nunicode_sqlite3_collate_nocase_utf16he);
#endif /* NU_SQLITE_OMIT_UTF16 */

	REGISTER_UPPER(rc, db, SQLITE_UTF8, nunicode_sqlite3_upper_utf8);
#ifndef NU_SQLITE_OMIT_UTF16
	REGISTER_UPPER(rc, db, SQLITE_UTF16LE, nunicode_sqlite3_upper_utf16le);
	REGISTER_UPPER(rc, db, SQLITE_UTF16BE, nunicode_sqlite3_upper_utf16be);
	REGISTER_UPPER(rc, db, SQLITE_UTF16, nunicode_sqlite3_upper_utf16he);
#endif /* NU_SQLITE_OMIT_UTF16 */

	REGISTER_LOWER(rc, db, SQLITE_UTF8, nunicode_sqlite3_lower_utf8);
#ifndef NU_SQLITE_OMIT_UTF16
	REGISTER_LOWER(rc, db, SQLITE_UTF16LE, nunicode_sqlite3_lower_utf16le);
	REGISTER_LOWER(rc, db, SQLITE_UTF16BE, nunicode_sqlite3_lower_utf16be);
	REGISTER_LOWER(rc, db, SQLITE_UTF16, nunicode_sqlite3_lower_utf16he);
#endif /* NU_SQLITE_OMIT_UTF16 */

	REGISTER_UNACCENT(rc, db, SQLITE_UTF8, nunicode_sqlite3_unaccent_utf8);
#ifndef NU_SQLITE_OMIT_UTF16
	REGISTER_UNACCENT(rc, db, SQLITE_UTF16LE, nunicode_sqlite3_unaccent_utf16le);
	REGISTER_UNACCENT(rc, db, SQLITE_UTF16BE, nunicode_sqlite3_unaccent_utf16be);
	REGISTER_UNACCENT(rc, db, SQLITE_UTF16, nunicode_sqlite3_unaccent_utf16he);
#endif /* NU_SQLITE_OMIT_UTF16 */

	return SQLITE_OK;
}

/** Automatic entry point to allow loading extension
 * w/o explicitely setting entry point to sqlite3_nunicode_init
 */
NU_SQLITE3_EXPORT
int sqlite3_nusqlite_init(sqlite3 *db, char **err_msg, const sqlite3_api_routines *api) {
	return sqlite3_nunicode_init(db, err_msg, (void *)(api));
}
