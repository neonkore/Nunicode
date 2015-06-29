#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_strchr() {
	const char *input1 = "Mass";
	const char *input2 = "Maße";
	const char *input3 = "côté";

	assert(nu_strchr(input1, 'i', nu_utf8_read) == 0);
	assert(nu_strchr(input1, 'M', nu_utf8_read) == input1);
	assert(nu_strchr(input1, 's', nu_utf8_read) == input1 + 2);
	assert(nu_strchr(input1, 0x00DF, nu_utf8_read) == 0);

	assert(nu_strchr(input2, 'e', nu_utf8_read) == input2 + 4);
	assert(nu_strchr(input2, 's', nu_utf8_read) == 0);
	assert(nu_strchr(input2, 0x00DF, nu_utf8_read) == input2 + 2);

	assert(nu_strchr(input3, 'c', nu_utf8_read) == input3);
	assert(nu_strchr(input3, 0x00F4, nu_utf8_read) == input3 + 1);
}

void test_strnchr() {
	const char *input1 = "Masse";

	assert(nu_strnchr(input1, 200, 'i', nu_utf8_read) == 0);
	assert(nu_strnchr(input1, 200, 'M', nu_utf8_read) == input1);
	assert(nu_strnchr(input1, 1, 'M', nu_utf8_read) == input1);
	assert(nu_strnchr(input1, 0, 'M', nu_utf8_read) == 0);
	assert(nu_strnchr(input1, 2, 's', nu_utf8_read) == 0);
	assert(nu_strnchr(input1, 3, 's', nu_utf8_read) == input1 + 2);
}

void test_strcasechr() {
	const char *input1 = "MASSE";
	const char *input2 = "Maße";
	const char *input3 = "MASE";
	const char *input4 = "MAS";

	assert(nu_strcasechr(input1, 'i', nu_utf8_read) == 0);
	assert(nu_strcasechr(input1, 'e', nu_utf8_read) == input1 + 4);
	assert(nu_strcasechr(input1, 0x00DF, nu_utf8_read) == input1 + 2);

	assert(nu_strcasechr(input2, 0x00DF, nu_utf8_read) == input2 + 2);
	assert(nu_strcasechr(input2, 's', nu_utf8_read) == input2 + 2);
	assert(nu_strcasechr(input2, 'S', nu_utf8_read) == input2 + 2);
	assert(nu_strcasechr(input2, 'e', nu_utf8_read) == input2 + 4);

	assert(nu_strcasechr(input3, 0x00DF, nu_utf8_read) == 0);

	assert(nu_strcasechr(input4, 0x00DF, nu_utf8_read) == 0);
}

void test_strcasenchr() {
	const char *input1 = "MASSE";
	const char *input2 = "Maße";

	assert(nu_strcasenchr(input1, 200, 'i', nu_utf8_read) == 0);
	assert(nu_strcasenchr(input1, 4, 'e', nu_utf8_read) == 0);
	assert(nu_strcasenchr(input1, 5, 'e', nu_utf8_read) == input1 + 4);

	assert(nu_strcasenchr(input2, 200, 0x00DF, nu_utf8_read) == input2 + 2);
	assert(nu_strcasenchr(input2, 5, 0x00DF, nu_utf8_read) == input2 + 2);
	assert(nu_strcasenchr(input2, 4, 0x00DF, nu_utf8_read) == 0);
}

void test_strrchr() {
	const char *input1 = "Masse";

	assert(nu_strrchr(input1, 'i', nu_utf8_read) == 0);
	assert(nu_strrchr(input1, 'M', nu_utf8_read) == input1);
	assert(nu_strrchr(input1, 's', nu_utf8_read) == input1 + 3);
}

void test_strrnchr() {
	const char *input1 = "Masse";

	assert(nu_strrnchr(input1, 200, 'i', nu_utf8_read) == 0);
	assert(nu_strrnchr(input1, 200, 'e', nu_utf8_read) == input1 + 4);
	assert(nu_strrnchr(input1, 1, 'M', nu_utf8_read) == input1);
	assert(nu_strrnchr(input1, 0, 'M', nu_utf8_read) == 0);
	assert(nu_strrnchr(input1, 2, 's', nu_utf8_read) == 0);
	assert(nu_strrnchr(input1, 3, 's', nu_utf8_read) == input1 + 2);
	assert(nu_strrnchr(input1, 4, 's', nu_utf8_read) == input1 + 3);
}

void test_strrcasechr() {
	const char *input1 = "MASSE";

	assert(nu_strrcasechr(input1, 'i', nu_utf8_read) == 0);
	assert(nu_strrcasechr(input1, 'e', nu_utf8_read) == input1 + 4);
	assert(nu_strrcasechr(input1, 's', nu_utf8_read) == input1 + 3);
}

void test_strrcasenchr() {
	const char *input1 = "MASSE";

	assert(nu_strrcasenchr(input1, 200, 'i', nu_utf8_read) == 0);
	assert(nu_strrcasenchr(input1, 2, 's', nu_utf8_read) == 0);
	assert(nu_strrcasenchr(input1, 3, 's', nu_utf8_read) == input1 + 2);
	assert(nu_strrcasenchr(input1, 4, 's', nu_utf8_read) == input1 + 3);
}

void test_strcoll() {
	assert(nu_strcoll("ß", "ß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("ss", "ss", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("s", "ss", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("ss", "s", nu_utf8_read, nu_utf8_read) > 0);

	assert(nu_strcoll("ё", "ё", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("е", "ё", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Е", "Ё", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("ё", "я", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Ё", "Я", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Я", "Ё", nu_utf8_read, nu_utf8_read) > 0);

	assert(nu_strcoll("rôle", "rôle", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("role", "roles", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("roles", "rule", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("role", "rôle", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Role", "role", nu_utf8_read, nu_utf8_read) > 0);
	assert(nu_strcoll("Role", "rôle", nu_utf8_read, nu_utf8_read) > 0);
	assert(nu_strcoll("Rôle", "rôle", nu_utf8_read, nu_utf8_read) > 0);
	assert(nu_strcoll("vario", "varî", nu_utf8_read, nu_utf8_read) < 0);

	assert(nu_strcoll("ß", "ß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("s", "ß", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcasecoll("ß", "s", nu_utf8_read, nu_utf8_read) > 0);

	assert(nu_strcoll("аб", "а", nu_utf8_read, nu_utf8_read) > 0);
	assert(nu_strcoll("а", "аб", nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("аб", "аб", nu_utf8_read, nu_utf8_read) == 0);
}

void test_strncoll() {
	assert(nu_strncoll("vario", 1, "varî", 1, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("vario", 2, "varî", 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("vario", 3, "varî", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("vario", 4, "varî", 4, nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strncoll("vario", 5, "varî", 5, nu_utf8_read, nu_utf8_read) < 0);

	assert(nu_strncoll("абв", 4, "аб", 4, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("абв", 6, "аб", 4, nu_utf8_read, nu_utf8_read) > 0);
	assert(nu_strncoll("аб", 4, "абв", 6, nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strncoll("абв", 6, "аб", 4, nu_utf8_read, nu_utf8_read) > 0);
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
	assert(nu_strcasecoll("ßs", "Sß", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("sß", "ßS", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("Sßs", "sßS", nu_utf8_read, nu_utf8_read) == 0);

	assert(nu_strcasecoll("MASSE", "Maße", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasecoll("Maße", "MASSE", nu_utf8_read, nu_utf8_read) == 0);
}

void test_strcasencoll() {
	assert(nu_strcasencoll("MASSE", 1, "Maßa", 1, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencoll("MASSE", 2, "Maßa", 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencoll("MASSE", 3, "Maßa", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencoll("MASSE", 4, "Maßa", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasencoll("MASSE", 5, "Maßa", 4, nu_utf8_read, nu_utf8_read) > 0);
}

void test_strstr() {
	const char *input1 = "Masse";
	const char *input2 = "côté";
	const char *input3 = "Massess";

	assert(nu_strstr(input1, "", nu_utf8_read, nu_utf8_read) == input1);
	assert(nu_strstr(input1, "ee", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strstr(input1, "asd", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strstr(input1, "Ma", nu_utf8_read, nu_utf8_read) == input1);

	assert(nu_strstr(input2, "cô", nu_utf8_read, nu_utf8_read) == input2);

	assert(nu_strstr(input3, "s", nu_utf8_read, nu_utf8_read) == input3 + 2);
	assert(nu_strstr(input3, "ss", nu_utf8_read, nu_utf8_read) == input3 + 2);
	assert(nu_strstr(input3, "ess", nu_utf8_read, nu_utf8_read) == input3 + 4);
}

void test_strnstr() {
	const char *input1 = "Masse";

	assert(nu_strnstr(input1, 100, "", 1, nu_utf8_read, nu_utf8_read) == input1);

	assert(nu_strnstr(input1, 100, "ee", 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strnstr(input1, 100, "s", 1, nu_utf8_read, nu_utf8_read) == input1 + 2);
	assert(nu_strnstr(input1, 2, "s", 1, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strnstr(input1, 3, "s", 1, nu_utf8_read, nu_utf8_read) == input1 + 2);
	assert(nu_strnstr(input1, 3, "ss", 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strnstr(input1, 200, "ss", 2, nu_utf8_read, nu_utf8_read) == input1 + 2);
	assert(nu_strnstr(input1, 3, "sse", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strnstr(input1, 4, "sse", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strnstr(input1, 5, "sse", 3, nu_utf8_read, nu_utf8_read) == input1 + 2);
}

void test_strcasestr() {
	const char *input1 = "MASSE";

	assert(nu_strcasestr(input1, "sse", nu_utf8_read, nu_utf8_read) == input1 + 2);
}

void test_strcasenstr() {
	const char *input1 = "MASSE";
	const char *input2 = "maße";

	assert(nu_strcasenstr(input1, 100, "asd", 3, nu_utf8_read, nu_utf8_read) == 0);

	assert(nu_strcasenstr(input1, 100, "sse", 3, nu_utf8_read, nu_utf8_read) == input1 + 2);
	assert(nu_strcasenstr(input1, 3, "sse", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasenstr(input1, 4, "sse", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasenstr(input1, 5, "sse", 3, nu_utf8_read, nu_utf8_read) == input1 + 2);

	assert(nu_strcasenstr(input2, 3, "sse", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasenstr(input2, 4, "sse", 3, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcasenstr(input2, 5, "sse", 3, nu_utf8_read, nu_utf8_read) == input2 + 2);
}

void test_crossencoding_strcoll() {
	const char *input_utf8 = "Maße";
	const char *input_utf16be = "\x00\x4D\x00\x61\x00\xDF\x00\x65\x00\x00"; /* "Maße" */

	assert(nu_strcoll(input_utf8, input_utf16be, nu_utf8_read, nu_utf16be_read) == 0);
	assert(nu_strcoll(input_utf16be, input_utf8, nu_utf16be_read, nu_utf8_read) == 0);
}

void test_strcoll_contractions() {
	assert(nu_strcoll("ŀ" /* U+0140 */, "Ŀ" /* U+013F */, nu_utf8_read, nu_utf8_read) < 0);
	assert(nu_strcoll("Ŀ" /* U+013F */, "L·" /* U+004C, U+00B7 */, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("Ŀ" /* U+013F */, "L·" /* U+004C, U+0387 */, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strcoll("Ŀ" /* U+013F */, "ǈ" /* U+01C8 */, nu_utf8_read, nu_utf8_read) < 0);

	/* changed relation due to size limitation in nu_strncoll */
	assert(nu_strncoll("Ŀ" /* U+013F */, 2, "L·" /* U+004C, U+00B7 */, 2, nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strncoll("Ŀ" /* U+04D1 */, 2, "L·" /* U+0430, U+0306 */, 1, nu_utf8_read, nu_utf8_read) > 0);
}
