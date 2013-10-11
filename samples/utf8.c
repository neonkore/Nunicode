#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <libnu/libnu.h>

int main() {
	const char *input = "𠜱";
	printf(">>> input: %s\n", input);

	ssize_t u_len = nu_strlen(input, nu_utf8_read) + 1; /* for trailing 0 */
	printf("--- decoded utf8 length: %d\n", u_len - 1);

	printf("--- allocating %d unicode codepoints\n", u_len);
	uint32_t *decoded = malloc(sizeof(*decoded) * u_len);

	nu_read_str(input, decoded, nu_utf8_read);

	ssize_t u8_len = nu_bytelen(decoded, nu_utf8_write);
	printf("--- encoded utf8 length: %d\n", u8_len);

	printf("--- allocating %d utf8 bytes\n", u8_len);
	char *encoded = malloc(sizeof(*encoded) * u8_len + 1);
	encoded[u8_len] = 0;

	nu_write_str(decoded, encoded, nu_utf8_write);

	printf("<<< output: %s\n", encoded);

	free(decoded);
	free(encoded);
	return 0;
}
