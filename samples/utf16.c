#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <libnu/libnu.h>

/* Example of BOM detection in UTF-16
 */

int main() {
	const char input[] = /* "привет мир!", UTF-16LE + BOM */
		"\xFF\xFE\x3F\x04\x40\x04\x38\x04"
		"\x32\x04\x35\x04\x42\x04\x20\x00"
		"\x3c\x04\x38\x04\x40\x04\x21\x00";

	printf(">>> input: %u bytes\n", (unsigned)sizeof(input));

	nu_utf16_bom_t bom;
	memset(&bom, 0, sizeof(bom));

	const char *encoded = nu_utf16_read_bom(input, &bom);

	ssize_t u_len = nu_strnlen(input, sizeof(input), bom.read);
	printf("--- decoded utf16 length (bytes): %d\n", (int)u_len);

	ssize_t u8_len = u_len * 4;
	printf("--- encoded utf8 max length (bytes): %d\n", (int)u8_len);

	char *utf8 = malloc(u8_len + 1);
	memset(utf8, 0, u8_len + 1);

	nu_transformnstr(encoded, sizeof(input) - 1 - sizeof(NU_UTF16_BOM),
		utf8, bom.read, nu_utf8_write);
	printf("<<< encoded utf8: %s\n", utf8);

	free(utf8);

	return 0;
}
