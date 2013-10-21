#include <stdio.h>

#include <libnu/libnu.h>

int main() {
	const char *MASSE = "MASSE";
	const char *Masse = "Maße";
	printf("nustrnu_strcoll(%s, %s): %d\n", 
		MASSE, Masse, 
		nu_strcasecoll(MASSE, Masse, nu_utf8_read, nu_utf8_read));

	const char role[] = "rôlÊ";
	char upper_buffer[sizeof(role)] = { 0 };
	char lower_buffer[sizeof(role)] = { 0 };

	const char *p = role;
	char *upper = upper_buffer;
	char *lower = lower_buffer;

	while (*p != 0) {
		uint32_t in = 0;
		p = nu_utf8_read(p, &in);
		
		uint32_t up = nu_toupper(in);
		uint32_t lo = nu_tolower(in);

		upper = nu_utf8_write(up == 0 ? in : up, upper);
		lower = nu_utf8_write(lo == 0 ? in : lo, lower);
	}

	printf("nu_toupper(\"%s\"): %s\n", role, upper_buffer);
	printf("nu_tolower(\"%s\"): %s\n", role, lower_buffer);
}
