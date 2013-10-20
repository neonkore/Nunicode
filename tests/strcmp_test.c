#include <assert.h>

#include <libnu/libnu.h>

void test_strcmp() {
	assert(nu_strcmp("aёô", "aёô", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcmp("ё", "я", nu_utf8_read, nu_utf8_read) > 0);
	assert(nu_strcmp("Ё", "Я", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcmp("Ё", "Ё", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcmp("привет", "ромашки", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcmp("ромашки", "привет", nu_utf8_read, nu_utf8_read) > 0);
	assert(nu_strcmp("привет", "привет", nu_utf8_read, nu_utf8_read) == 0);
}

void test_strncmp() {
	assert(nu_strncmp("aёôъ", "aёôь", 1, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncmp("aёôъ", "aёôь", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncmp("aёôъ", "aёôь", 5, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncmp("aёôъ", "aёôь", 7, nu_utf8_read, nu_utf8_read) < 0);
}

void test_strcasecmp() {
	assert(nu_strcasecmp("ё", "я", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcasecmp("Ё", "Я", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcasecmp("Ё", "Ё", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecmp("Ё", "ё", nu_utf8_read, nu_utf8_read) == 0);
}

void test_strcasencmp() {
	assert(nu_strcasencmp("Ёйо", "ёйу", 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencmp("Ёйо", "ёйу", 4, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencmp("Ёйо", "ёйу", 6, nu_utf8_read, nu_utf8_read) < 0);
}
