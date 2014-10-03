#include "unicode/ucol.h"

#define PASSES (100000)
#define INPUT1 ("аАбБвВгГдДеЕёЁжЖзЗиИйЙкКлЛмМнНоОпПрРсСтТуУфФхХцЦчЧшШщЩъЪыЫьЬэЭюЮяЯ")
#define INPUT2 ("аАбБвВгГдДеЕёЁжЖзЗиИйЙкКлЛмМнНоОппррссттууффххццччшшщщъъыыььээююяя")

int main() {
	UErrorCode status = U_ZERO_ERROR;
	UCollator *coll = ucol_open(0, &status);
	ucol_setStrength(coll, UCOL_PRIMARY);

	for (int i = 0; i < PASSES; ++i) {
		UCollationResult coll_res = ucol_strcollUTF8(coll, INPUT1, -1, INPUT2, -1, &status);
		(void)(coll_res);
	}

	ucol_close(coll);

	return 0;
}
