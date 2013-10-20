#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_strcoll() {
	assert(nu_strcoll("ё", "ё", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("е", "ё", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Е", "Ё", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("ё", "я", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Ё", "Я", nu_utf8_read, nu_utf8_read) < 0);

	assert(nu_strcoll("rôle", "rôle", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("role", "roles", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("roles", "rule", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("role", "rôle", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Role", "role", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Role", "rôle", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Rôle", "rôle", nu_utf8_read, nu_utf8_read) < 0);

	assert(nu_strcoll("ß", "ß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ß", "ss", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ss", "ß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("Masse", "Maße", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("Maße", "Masse", nu_utf8_read, nu_utf8_read) == 0);
}

void test_strncoll() {
	assert(nu_strncoll("vario", "varî", 1, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("vario", "varî", 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("vario", "varî", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("vario", "varî", 4, nu_utf8_read, nu_utf8_read) < 0);
}

void test_strcasecoll() {
	assert(nu_strcasecoll("ё", "ё", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("ё", "Ё", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("Ё", "ё", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("ёлка", "Ёлка", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("Ёлка", "ёлка", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("ё", "я", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcasecoll("Ё", "Я", nu_utf8_read, nu_utf8_read) < 0);

	assert(nu_strcasecoll("RÔLE", "rôle", nu_utf8_read, nu_utf8_read) == 0);

	assert(nu_strcasecoll("ß", "ß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("MASSE", "Maße", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("Maße", "MASSE", nu_utf8_read, nu_utf8_read) == 0);
}

void test_strcasencoll() {
	assert(nu_strcasencoll("MASSE", "Maßa", 1, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencoll("MASSE", "Maßa", 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencoll("MASSE", "Maßa", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencoll("MASSE", "Maßa", 4, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencoll("MASSE", "Maßa", 5, nu_utf8_read, nu_utf8_read) > 0);
}
