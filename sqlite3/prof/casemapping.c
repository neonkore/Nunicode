#include <stdlib.h>

#include <libnu/libnu.h>
#include "../nusqlite3.h"

void * _malloc(int size) {
	return malloc(size);
}

char* _nunicode_casemapping(const char *encoded, nu_casemapping_t casemap,
	nu_read_iterator_t read, nu_write_iterator_t write,
	nu_sqlite3_ext_alloc_t nu_sqlite3_ext_alloc);

int main() {
	char *upper = _nunicode_casemapping("привет", nu_toupper,
		nu_utf8_read, nu_utf8_write, _malloc);
	(void)(upper);

	return 0;
}
