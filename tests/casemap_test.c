#include <assert.h>

#include <libnu/libnu.h>

void test_toupper() {
	uint32_t u;
	const char *map = 0;

	map = nu_toupper(0x0061); /* a */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x0041); /* A */

	map = nu_toupper(0x0451); /* ё */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x0401); /* Ё */

	map = nu_toupper(0x00F4); /* ô */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x00D4); /* Ô */

	map = nu_toupper(0xFB02); /* ﬂ */
	assert(map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x0046); /* F */
	nu_casemap_read(map, &u);
	assert(u == 0x004C); /* L */

	map = nu_toupper(0x00E6); /* æ */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x00C6); /* Æ */

	assert(nu_toupper(0x00A0) == 0);
	assert(nu_toupper(0x0041) == 0);
}

void test_tolower() {
	uint32_t u;
	const char *map = 0;

	map = nu_tolower(0x0041); /* A */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x0061); /* a */

	map = nu_tolower(0x0401); /* Ё */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x0451); /* ё */

	map = nu_tolower(0x00D4); /* Ô */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x00F4); /* ô */

	map = nu_tolower(0x00C6); /* Æ */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x00E6); /* æ */

	assert(nu_tolower(0x00A0) == 0);
	assert(nu_tolower(0x0061) == 0);
}

void test_tofold() {
	uint32_t u;
	const char *map = 0;

	map = nu_tofold(0x00DF); /* ß */
	assert(map != 0);
	map = nu_casemap_read(map, &u);
	assert(u == 0x0073 && map != 0); /* s */
	map = nu_casemap_read(map, &u);
	assert(u == 0x0073 && map != 0); /* s */
	nu_casemap_read(map, &u);
	assert(u == 0);

	map = nu_tofold(0x00C6); /* Æ */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x00E6); /* æ */

	map = nu_tofold(0x000A); /* \n */
	assert(map == 0);
}

/* simple test of internal versions of toupper() and tofold() */
void test__toupper__tofold() {
	uint32_t u;
	const char *transform = 0;

	/* toupper() */
	assert(_nu_toupper("ﬂ", NU_UNLIMITED, nu_utf8_read, &u, &transform, 0) != 0);
	assert(transform != 0);
	assert(u == 0xFB02); /* ﬂ */
	transform = nu_casemap_read(transform, &u);
	assert(u == 0x0046); /* F */
	transform = nu_casemap_read(transform, &u);
	assert(u == 0x004C); /* L */
	nu_casemap_read(transform, &u);
	assert(u == 0);

	/* tofold() */
	assert(_nu_tofold("ß", NU_UNLIMITED, nu_utf8_read, &u, &transform, 0) != 0);
	assert(transform != 0);
	assert(u == 0x00DF); /* ß */
	transform = nu_casemap_read(transform, &u);
	assert(u == 0x0073 && transform != 0); /* s */
	transform = nu_casemap_read(transform, &u);
	assert(u == 0x0073 && transform != 0); /* s */
	nu_casemap_read(transform, &u);
	assert(u == 0);

	/* no mapping */
	assert(_nu_toupper("A", NU_UNLIMITED, nu_utf8_read, &u, &transform, 0) != 0);
	assert(transform == 0);
	assert(u == 0x0041);

	assert(_nu_tofold("\n", NU_UNLIMITED, nu_utf8_read, &u, &transform, 0) != 0);
	assert(transform == 0);
	assert(u == 0x000A);

	/* check optional pointer to transformed codepoint */
	u = 0xFFFF;
	assert(_nu_tofold("ß", NU_UNLIMITED, nu_utf8_read, 0, &transform, 0) != 0);
	assert(u == 0xFFFF);
	assert(_nu_toupper("ﬂ", NU_UNLIMITED, nu_utf8_read, 0, &transform, 0) != 0);
	assert(u == 0xFFFF);
}

/* simple test + internal tolower() includes Sigma casemapping */
void test__tolower() {
	uint32_t u;
	const char *transform = 0;

	/* simple */
	assert(_nu_tolower("Æ", NU_UNLIMITED, nu_utf8_read, &u, &transform, 0) != 0);
	assert(transform != 0);
	assert(u == 0x00C6); /* Æ */
	transform = nu_casemap_read(transform, &u);
	assert(u == 0x00E6 && transform != 0); /* æ */
	nu_casemap_read(transform, &u);
	assert(u == 0);

	/* Sigma */
	assert(_nu_tolower("Σ", NU_UNLIMITED, nu_utf8_read, &u, &transform, 0) != 0);
	assert(transform != 0);
	assert(u == 0x03A3); /* Σ */
	transform = nu_casemap_read(transform, &u);
	assert(u == 0x03C2 && transform != 0); /* ς */
	nu_casemap_read(transform, &u);
	assert(u == 0);

	assert(_nu_tolower("ΣΣ", NU_UNLIMITED, nu_utf8_read, &u, &transform, 0) != 0);
	assert(transform != 0);
	assert(u == 0x03A3); /* Σ */
	transform = nu_casemap_read(transform, &u);
	assert(u == 0x03C3 && transform != 0); /* σ */
	nu_casemap_read(transform, &u);
	assert(u == 0);

	/* limit handling */
	const char input[] = "ΣΣ";

	assert(_nu_tolower(input, input + 2, nu_utf8_read, &u, &transform, 0) == input + 2);
	assert(transform != 0);
	assert(u == 0x03A3); /* Σ */
	nu_casemap_read(transform, &u);
	assert(u == 0x03C2); /* ς */

	assert(_nu_tolower(input, input + 4, nu_utf8_read, &u, &transform, 0) == input + 2);
	assert(transform != 0);
	assert(u == 0x03A3); /* Σ */
	nu_casemap_read(transform, &u);
	assert(u == 0x03C3); /* σ */

	/* no mapping */
	assert(_nu_tolower("\n", NU_UNLIMITED, nu_utf8_read, &u, &transform, 0) != 0);
	assert(transform == 0);
	assert(u == 0x000A);

	assert(_nu_tolower("a", NU_UNLIMITED, nu_utf8_read, &u, &transform, 0) != 0);
	assert(transform == 0);
	assert(u == 0x0061);

	/* check optional pointer to transformed codepoint */
	u = 0xFFFF;
	assert(_nu_tolower("Σ", NU_UNLIMITED, nu_utf8_read, 0, &transform, 0) != 0);
	assert(u == 0xFFFF);
}
