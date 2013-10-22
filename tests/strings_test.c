#include <assert.h>
#include <string.h>

#include <libnu/libnu.h>

void test_strings_strlen() {
	assert(nu_strlen("hello", nu_utf8_read) == 5);
	assert(nu_strlen("привет", nu_utf8_read) == 6);
}

void test_strings_bytelen() {
	const uint32_t input[] = { 0x043F, 0x0440, 0x0438, 0x0432, 0x0435, 0x0442, 0 }; /* "привет" */
	const uint32_t zero[] = { 0 };

	assert(nu_bytelen(input, nu_utf8_write) == 12);
	assert(nu_bytelen(zero, nu_utf8_write) == 0);
}

void test_strings_strchr() {
	const char *input = "прпрпр";

	assert(nu_strchr(input, 0x043F /* п */, nu_utf8_read) == input);
	assert(nu_strchr(input, 0x0440 /* р */, nu_utf8_read) == input + 2);
	assert(nu_strchr(input, 0x0441, nu_utf8_read) == 0);
}

void test_strings_strrchr() {
	const char *input = "прпрпр";

	assert(nu_strrchr(input, 0x043F /* п */, nu_utf8_read) == input + 8);
	assert(nu_strrchr(input, 0x0440 /* р */, nu_utf8_read) == input + 10);
	assert(nu_strrchr(input, 0x0441, nu_utf8_read) == 0);
}

void test_strings_strnlen() {
	assert(nu_strnlen("привет", 1, nu_utf8_read) == 1); /* might happen */
	assert(nu_strnlen("привет", 2, nu_utf8_read) == 1);
	assert(nu_strnlen("привет", 4, nu_utf8_read) == 2);
	assert(nu_strnlen("привет", 400, nu_utf8_read) == 6); /* didn't go over 0 */
}

void test_strings_bytenlen() {
	const uint32_t input[] = { 0x043F, 0x0440, 0x0438, 0x0432, 0x0435, 0x0442, 0 }; /* "привет" */

	assert(nu_bytenlen(input, 1, nu_utf8_write) == 2);
	assert(nu_bytenlen(input, 2, nu_utf8_write) == 4);
	assert(nu_bytenlen(input, 200, nu_utf8_write) == 6 * 2); /* didnt go over 0 */
}

void test_strings_strnchr() {
	const char input[] = "прпрпр\0с"; /* inject cyrillic "с" after 0 for test */

	assert(nu_strnchr(input, 2, 0x043F /* п */, nu_utf8_read) == input);
	assert(nu_strnchr(input, 2, 0x0440 /* р */, nu_utf8_read) == 0); /* didn't go further than limit */
	assert(nu_strnchr(input, sizeof(input), 0x0440 /* р */, nu_utf8_read) == input + 2); /* didn't go further than limit */
	assert(nu_strnchr(input, sizeof(input), 0x0441, nu_utf8_read) == 0); /* didn't go further than 0 */
	assert(nu_strnchr(input, 200, 0x0441, nu_utf8_read) == 0);
}

void test_strings_strrnchr() {
	const char input[] = "прпрпр\0с"; /* inject cyrillic "с" after 0 for test */

	assert(nu_strrnchr(input, 8, 0x043F /* п */, nu_utf8_read) == input + 4);
	assert(nu_strrnchr(input, 8, 0x0440 /* р */, nu_utf8_read) == input + 6);
	assert(nu_strrnchr(input, sizeof(input), 0x0441, nu_utf8_read) == 0); /* didn't go further than 0 */
	assert(nu_strrnchr(input, 200, 0x0441, nu_utf8_read) == 0);
}

void test_strings_strstr() {
	const char *input = "привет";

	assert(nu_strstr(input, "иве", nu_utf8_read, nu_utf8_read) == input + 4);
	assert(nu_strstr(input, "привет", nu_utf8_read, nu_utf8_read) == input);
	assert(nu_strstr(input, "т", nu_utf8_read, nu_utf8_read) == input + 10);
	assert(nu_strstr(input, "примус", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strstr(input, "абырвагл", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strstr(input, "", nu_utf8_read, nu_utf8_read) == input);
}

void test_strings_strnstr() {
	const char *input = "привет";

	assert(nu_strnstr(input, 200, "иве", nu_utf8_read, nu_utf8_read) == input + 4);
	assert(nu_strnstr(input, 8, "иве", nu_utf8_read, nu_utf8_read) == 0);
	assert(nu_strnstr(input, 10, "иве", nu_utf8_read, nu_utf8_read) == input + 4);
	assert(nu_strnstr(input, 0, "", nu_utf8_read, nu_utf8_read) == input);
}
