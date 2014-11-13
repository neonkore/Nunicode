#ifndef NU_VERSION_H
#define NU_VERSION_H

#include "defines.h"

/** @defgroup other Other
 */

/** This define holds human-readable version of nunicode
 *
 * @ingroup defines
 */
#define NU_VERSION "custom"

/** Human-readable version of nunicode
 *
 * @ingroup other
 * @return version string
 */
NU_EXPORT
const char* nu_version(void);

#endif /* NU_VERSION_H */
