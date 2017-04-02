#include <stdio.h>

#include <libnu/libnu.h>

/* Example of unaccenting a string
 */

char* unaccent(uint32_t unicode, char *utf8) {
	const char *unaccented = nu_tounaccent(unicode);

	if (unaccented != 0) {
		uint32_t codepoint = 0;
		const char *p = unaccented;

		do {
			p = nu_casemap_read(p, &codepoint);
			if (codepoint == 0) {
				break;
			}

			utf8 = nu_utf8_write(codepoint, utf8);
		}
		while (codepoint != 0);
	}
	else { // no unaccented variant
		utf8 = nu_utf8_write(unicode, utf8);
	}

	return utf8;
}


int main() {
	{
		const char input[] = "Cafe\xCC\x81"; /* "Cafe" + U+0301 COMBINING ACUTE ACCENT in utf-8 */
		char output[sizeof(input)] = { 0 }; /* should be enough */

		nu_transformstr(input, output, nu_utf8_read, unaccent);

		printf(">>> input (combining mark): %s\n", input);
		printf("<<< output: %s\n", output);
	}

	{
		const char input[] = "Φραπέ";
		char output[sizeof(input)] = { 0 }; /* should be enough */

		nu_transformstr(input, output, nu_utf8_read, unaccent);

		printf(">>> input (precomposed): %s\n", input);
		printf("<<< output: %s\n", output);
	}

	return 0;
}
