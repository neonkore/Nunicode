#include <libnu/libnu.h>

#define PASSES (100000)
#define INPUT ("аАбБвВгГдДеЕёЁжЖзЗиИйЙкКлЛмМнНоОпПрРсСтТуУфФхХцЦчЧшШщЩъЪыЫьЬэЭюЮяЯ")

int main() {
	for (int i = 0; i < PASSES; ++i) {
		const char *p = INPUT;
		uint32_t u = 0;

		while (1) {
			p = nu_utf8_read(p, &u);

			if (u == 0) {
				break;
			}
		}
	}

	return 0;
}
