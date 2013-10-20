#ifndef NU_STRCOLL_H
#define NU_STRCOLL_H

#include <sys/types.h>

#include "strings.h"

#if defined (__cplusplus) || defined (c_plusplus)
extern "C" {
#endif

typedef int (*nu_codepointcmp_t)(uint32_t u1, uint32_t u2);

int nu_strcmp(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2);
int nu_strncmp(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2);
int nu_strcoll(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2);
int nu_strncoll(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2);

int nu_strcasecmp(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2);
int nu_strcasencmp(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2);
int nu_strcasecoll(const char *s1, const char *s2, nu_read_iterator_t it1, nu_read_iterator_t it2);
int nu_strcasencoll(const char *s1, const char *s2, size_t max_len, nu_read_iterator_t it1, nu_read_iterator_t it2);

#if defined (__cplusplus) || defined (c_plusplus)
}
#endif

#endif /* NU_STRCOLL_H */
