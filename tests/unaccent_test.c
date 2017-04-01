#include <assert.h>

#include <libnu/libnu.h>

void test_tounaccent() {
	uint32_t u;
	const char *map = 0;

	map = nu_tounaccent(0x00C0); /* À */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x0041); /* A */

	map = nu_tounaccent(0x00C1); /* Á */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x0041); /* A */

	map = nu_tounaccent(0x00C2); /* Â */
	assert(map != 0);
	nu_casemap_read(map, &u);
	assert(u == 0x0041); /* A */

	assert(nu_tounaccent(0x00A0) == 0);
	assert(nu_tounaccent(0x0041) == 0);
}

void test__tounaccent() {
	uint32_t u;
	const char *transform = 0;

	/* simple */
	assert(_nu_tounaccent("Â", NU_UNLIMITED, nu_utf8_read, &u, &transform, 0) != 0);
	assert(transform != 0);
	assert(u == 0x00C2); /* Â */
	transform = nu_casemap_read(transform, &u);
	assert(u == 0x0041 && transform != 0); /* A */
	nu_casemap_read(transform, &u);
	assert(u == 0);

	/* no mapping */
	assert(_nu_tounaccent("A", NU_UNLIMITED, nu_utf8_read, &u, &transform, 0) != 0);
	assert(transform == 0);
	assert(u == 0x0041);

	/* test optional u */
	u = 0xFFFF;
	assert(_nu_tounaccent("Â", NU_UNLIMITED, nu_utf8_read, 0, &transform, 0) != 0);
	assert(u == 0xFFFF);
}
