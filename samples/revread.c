#include <stdio.h>

#include <libnu/libnu.h>

/* Example of string reversal using revread
 */

int main() {
	const char input[] = "диско";
	printf(">>> input: %s\n", input);

	char output[sizeof(input)] = { 0 };

	const char *in = input + sizeof(input) - 1;
	char *ou = output;

	while (in != input) {
		uint32_t u = 0;
		in = nu_utf8_revread(&u, in);
		ou = nu_utf8_write(u, ou);
	}

	printf("<<< output: %s\n", output);
	return 0;
}
