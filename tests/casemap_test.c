#include <assert.h>

#include <libnu/libnu.h>

void test_toupper() {
	nu_read_iterator_t casemap_read;
	uint32_t u;
	const char *map = 0;

	map = nu_toupper(0x0061, &casemap_read); /* a */
	assert(map != 0 && casemap_read != 0);
	casemap_read(map, &u);
	assert(u == 0x0041); /* A */

	map = nu_toupper(0x0451, &casemap_read); /* ё */
	assert(map != 0 && casemap_read != 0);
	casemap_read(map, &u);
	assert(u == 0x0401); /* Ё */

	map = nu_toupper(0x00F4, &casemap_read); /* ô */
	assert(map != 0 && casemap_read != 0);
	casemap_read(map, &u);
	assert(u == 0x00D4); /* Ô */

	map = nu_toupper(0xFB02, &casemap_read); /* ﬂ */
	assert(map != 0 && casemap_read != 0);
	map = casemap_read(map, &u);
	assert(u == 0x0046); /* F */
	casemap_read(map, &u);
	assert(u == 0x004C); /* L */

	map = nu_toupper(0x00E6, &casemap_read); /* æ */
	assert(map != 0 && casemap_read != 0);
	casemap_read(map, &u);
	assert(u == 0x00C6); /* Æ */

	assert(nu_toupper(0x00A0, 0) == 0);
	assert(nu_toupper(0x0041, 0) == 0);
}

void test_tolower() {
	nu_read_iterator_t casemap_read;
	uint32_t u;
	const char *map = 0;

	map = nu_tolower(0x0041, &casemap_read); /* A */
	assert(map != 0 && casemap_read != 0);
	casemap_read(map, &u);
	assert(u == 0x0061); /* a */

	map = nu_tolower(0x0401, &casemap_read); /* Ё */
	assert(map != 0 && casemap_read != 0);
	casemap_read(map, &u);
	assert(u == 0x0451); /* ё */

	map = nu_tolower(0x00D4, &casemap_read); /* Ô */
	assert(map != 0 && casemap_read != 0);
	casemap_read(map, &u);
	assert(u == 0x00F4); /* ô */

	map = nu_tolower(0x00C6, &casemap_read); /* Æ */
	assert(map != 0 && casemap_read != 0);
	casemap_read(map, &u);
	assert(u == 0x00E6); /* æ */

	assert(nu_tolower(0x00A0, 0) == 0);
	assert(nu_tolower(0x0061, 0) == 0);
}
