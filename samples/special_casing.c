#include <stdio.h>

#include <libnu/libnu.h>

/* Example of conditional case mapping of Greek Sigma
 * (described in SpecialCasing.txt)
 */

int main() {
	const char *input1 = "ΔΙΆΛΕΚΤΟΣ" + 8 * 2; /* each codepoint is 2-bytes in UTF-8, input1 is pointing to Σ */
	const char *input2 = "ΔΙΆΛΕΚΤΟΣ " + 8 * 2; /* note whitespace at the end of the string */

	const char *i1_sigma = 0;
	const char *i2_sigma = 0;
	const char *i3_sigma = 0;

	/* _nu_tolower() will lowercase Σ into ς only
	 * at the string boundary or if it's followed by U+0000 */

	_nu_tolower(input1, NU_UNLIMITED, nu_utf8_read, 0, &i1_sigma, 0);
	_nu_tolower(input2, NU_UNLIMITED, nu_utf8_read, 0, &i2_sigma, 0);
	_nu_tolower(input2, input2 + 2, nu_utf8_read, 0, &i3_sigma, 0);

	printf("_nu_tolower(\"%s\"): %s\n", input1, i1_sigma);
	printf("_nu_tolower(\"%s\"): %s\n", input2, i2_sigma);
	printf("_nu_tolower(input2, input2 + 2, ...): %s\n", i3_sigma);
}
