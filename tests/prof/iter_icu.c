#include "unicode/utf.h"

#define PASSES (100000)
#define INPUT ("аАбБвВгГдДеЕёЁжЖзЗиИйЙкКлЛмМнНоОпПрРсСтТуУфФхХцЦчЧшШщЩъЪыЫьЬэЭюЮяЯ")

int main() {
	for (int i = 0; i < PASSES; ++i) {
		const char *p = INPUT;
		UChar32 u;

		int i = 0;
		while (1) {
			U8_NEXT_UNSAFE(p, i, u);

			if (u == 0) {
				break;
			}
		}
	}

	return 0;
}
