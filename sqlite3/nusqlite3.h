#ifndef NUNICODE_SQLITE3_EXT_H
#define NUNICODE_SQLITE3_EXT_H

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

/** Definition for internal purposes (profiling)
 */
typedef void *(*nu_sqlite3_ext_alloc_t)(int);

#ifndef NU_DYNAMIC_EXTENSION

/** Calling this function will enable nunicode for each new SQLite connection,
 *
 * @param verbose if not 0 - print libnu and libnusqlite3 versions
 */
void nunicode_sqlite3_static_init(int verbose);

#endif /* NU_DYNAMIC_EXTENSION */

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NUNICODE_SQLITE3_EXT_H */
