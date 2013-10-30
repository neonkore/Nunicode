#ifndef NU_DEFINES_H
#define NU_DEFINES_H

#ifndef NU_EXPORT
# ifdef _WIN32
#  define NU_EXPORT __declspec(dllexport)
# else
#  define NU_EXPORT
# endif
#endif /* NU_EXPORT */

#define NU_UNICODE_VERSION 630
#define NU_UNLIMITED ((const void *)(-1))

#endif /* NU_DEFINES_H */
