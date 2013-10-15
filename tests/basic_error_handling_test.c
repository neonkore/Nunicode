#include <assert.h>

#include <libnu/libnu.h>

void test_zstrings_basic_error_handling() {
	assert(nu_strlen("при\xA0\xC2", nu_utf8_read) == -7); /* misplaced lead and trail */
	assert(nu_strlen("при\xA0\xC2", nu_cesu8_read) == -7); /* misplaced lead and trail */
	
	/* UTF-16 will decode invalid codepoint, 
	 * should be covered under verification */

	/* str* functions will just return 0 */

	assert(nu_strchr("при\xA0\xC2g", 'g', nu_utf8_read) == 0);
	assert(nu_strrchr("при\xA0\xC2g", 'g', nu_utf8_read) == 0);
}

void test_nstrings_basic_error_handling() {
	assert(nu_strnlen("при\xA0\xC2", 200, nu_utf8_read) == -7);
	assert(nu_strnlen("при\xA0\xC2", 200, nu_cesu8_read) == -7);
	
	assert(nu_strnchr("при\xA0\xC2g", 200, 'g', nu_utf8_read) == 0);
	assert(nu_strrnchr("при\xA0\xC2g", 200, 'g', nu_utf8_read) == 0);
}

void test_extra_zstrings_basic_error_handling() {
	uint32_t u[32] = { 0 };
	char c[32 * 4] = { 0 };

	assert(nu_readstr("при\xA0\xC2", u, nu_utf8_read) == -7);
	assert(nu_transformstr("при\xA0\xC2", c, nu_utf8_read, nu_utf8_write) == -7);
}

void test_extra_nstrings_basic_error_handling() {
	uint32_t u[32] = { 0 };
	char c[32 * 4] = { 0 };

	assert(nu_readnstr("при\xA0\xC2", 200, u, nu_utf8_read) == -7);
	assert(nu_transformnstr("при\xA0\xC2", 200, c, nu_utf8_read, nu_utf8_write) == -7);
}
