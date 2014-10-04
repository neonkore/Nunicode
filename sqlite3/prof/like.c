#include <libnu/libnu.h>

int _nunicode_like(const char *lhs, const char *rhs, uint32_t escape,
	nu_read_iterator_t lhs_read, nu_read_iterator_t rhs_read);

int main() {
	int like_ret = _nunicode_like("Maße", "%SS%", 0, nu_utf8_read, nu_utf8_read);
	(void)(like_ret);

	return 0;
}
