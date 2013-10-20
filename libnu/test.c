#include <stdio.h>

#include "strcoll.h"
#include "tolower.h"
#include "toupper.h"
#include "../libnu/libnu.h"

int main() {
	const char *s1 = "SS";
	const char *s2 = "ß";
//	const char *s1 = "ё";
//	const char *s2 = "я";
//	const char *s1 = "ы";
//	const char *s2 = "Ы";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("coll: %d\n", nu_strcasecoll(s1, s2, nu_utf8_read, nu_utf8_read));

	return 0;
}
