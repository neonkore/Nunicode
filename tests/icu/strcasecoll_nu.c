#include <libnu/libnu.h>

#define PASSES (100000)
#define INPUT1 ("аАбБвВгГдДеЕёЁжЖзЗиИйЙкКлЛмМнНоОпПрРсСтТуУфФхХцЦчЧшШщЩъЪыЫьЬэЭюЮяЯ")
#define INPUT2 ("аАбБвВгГдДеЕёЁжЖзЗиИйЙкКлЛмМнНоОппррссттууффххццччшшщщъъыыььээююяя")

int main() {
	for (int i = 0; i < PASSES; ++i) {
		int coll_res = nu_strcasecoll(INPUT1, INPUT2, nu_utf8_read, nu_utf8_read);
		(void)(coll_res);
	}

	return 0;
}
