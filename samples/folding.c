#include <stdio.h>

#include <libnu/libnu.h>

int main() {
	const char *MASSE = "MASSE";
	const char *Masse = "Maße";
	printf("nustrnu_strcoll(%s, %s): %d\n", 
		MASSE, Masse, 
		nu_strcasecoll(MASSE, Masse, nu_utf8_read, nu_utf8_read));

	const char *role = "rôle";
	printf("nu_toupper(\"rôle\"): ");

	const char *lower = role;
	while (*lower != 0) {
		char buffer[32] = { 0 };

		uint32_t lo = 0;
		lower = nu_utf8_read(lower, &lo);
		
		uint32_t up = nu_toupper(lo);

		if (up == 0) {
			nu_utf8_write(lo, buffer);
			printf("%s", buffer);
			continue;
		}

		nu_utf8_write(up, buffer);
		printf("%s", buffer);
	}

	printf("\n");
}
