STATIC_TARGET = libnu.a
SHARED_TARGET = libnu.so
TESTS_TARGET  = tests/test
UTF8_SAMPLE   = samples/utf8
UTF16_SAMPLE  = samples/utf16
REVR_SAMPLE   = samples/revread
FOLD_SAMPLE   = samples/folding
DOCDIR        = doc

DECOMPS_SRC  = unicode.org/decomps.txt
UNIDATA_SRC  = unicode.org/UnicodeData.txt
SPECIAL_SRC  = unicode.org/SpecialCasing.txt
DUCET_DST    = libnu/gen/_ducet.h
TOUPPER_DST  = libnu/gen/_toupper.h
TOLOWER_DST  = libnu/gen/_tolower.h

OBJS = libnu/cesu8.o \
       libnu/ducet.o \
       libnu/extra.o \
       libnu/strcoll.o \
       libnu/strings.o \
       libnu/toupper.o \
       libnu/tolower.o \
       libnu/validate.o \
       libnu/udb.o \
       libnu/utf16.o \
       libnu/utf16be.o \
       libnu/utf16le.o \
       libnu/utf32.o \
       libnu/utf32be.o \
       libnu/utf32le.o \
       libnu/utf8.o \

TESTS_OBJS = tests/basic_error_handling_test.o \
             tests/casemap_test.o \
             tests/cesu8_test.o \
             tests/ducet_test.o \
             tests/extra_test.o \
             tests/fnv_test.o \
             tests/strcmp_test.o \
             tests/strcoll_test.o \
             tests/strings_test.o \
             tests/validation_test.o \
             tests/udb_test.o \
             tests/utf16_test.o \
             tests/utf16be_test.o \
             tests/utf16le_test.o \
             tests/utf32_test.o \
             tests/utf32be_test.o \
             tests/utf32le_test.o \
             tests/utf8_test.o \
             tests/main.o

BUILD_OPTIONS = -DNU_WITH_EVERYTHING

CFLAGS = -fPIC -Wall -Wextra -Werror -std=c99 -pedantic -Os $(BUILD_OPTIONS)
SHARED_LDFLAGS = -s
TESTS_LDFLAGS = -g
SAMPLES_LDFLAGS = -s

default: clean $(STATIC_TARGET) $(SHARED_TARGET)
all: default $(TESTS_TARGET) samples
gen: clean_gen $(DUCET_DST) $(TOUPPER_DST) $(TOLOWER_DST)
clean_gen:
	rm -f libnu/gen/*.h

%.o:%.c
	$(CC) -I . $(CFLAGS) -c "$<" -o "$@"

$(DUCET_DST):
	cat $(DECOMPS_SRC) | tools/decomps-tokeys | tools/mph >$(DUCET_DST)

$(TOUPPER_DST):
	(cat $(UNIDATA_SRC) | tools/unidata-toupper && cat $(SPECIAL_SRC) \
	| tools/special-toupper) | tools/mph >$(TOUPPER_DST)

$(TOLOWER_DST):
	(cat $(UNIDATA_SRC) | tools/unidata-tolower && cat $(SPECIAL_SRC) \
	| tools/special-tolower) | tools/mph >$(TOLOWER_DST)

$(STATIC_TARGET): $(OBJS)
	$(AR) crs "$(STATIC_TARGET)" $(OBJS)

$(SHARED_TARGET): $(OBJS)
	$(CC) $(OBJS) -shared -o "$(SHARED_TARGET)" "$(SHARED_LDFLAGS)"

$(TESTS_TARGET): $(STATIC_TARGET) $(TESTS_OBJS)
	$(CC) $(TESTS_OBJS) $(STATIC_TARGET) -o $(TESTS_TARGET) $(TESTS_LDFLAGS)

tests: $(TESTS_TARGET)

$(UTF8_SAMPLE): samples/utf8.o
	$(CC) samples/utf8.o $(STATIC_TARGET) -o $(UTF8_SAMPLE) $(SAMPLES_LDFLAGS)

$(UTF16_SAMPLE): samples/utf16.o
	$(CC) samples/utf16.o $(STATIC_TARGET) -o $(UTF16_SAMPLE) $(SAMPLES_LDFLAGS)

$(REVR_SAMPLE): samples/revread.o
	$(CC) samples/revread.o $(STATIC_TARGET) -o $(REVR_SAMPLE) $(SAMPLES_LDFLAGS)

$(FOLD_SAMPLE): samples/folding.o
	$(CC) samples/folding.o $(STATIC_TARGET) -o $(FOLD_SAMPLE) $(SAMPLES_LDFLAGS)

samples: $(UTF8_SAMPLE) $(UTF16_SAMPLE) $(REVR_SAMPLE) $(FOLD_SAMPLE)

clean:
	rm -f "$(STATIC_TARGET)" "$(SHARED_TARGET)"
	rm -f "$(TESTS_TARGET)"
	rm -f "$(UTF8_SAMPLE)" "$(UTF16_SAMPLE)" "$(REVR_SAMPLE)" "$(FOLD_SAMPLE)"
	rm -f *.o libnu/*.o tests/*.o samples/*.o
	rm -fr "$(DOCDIR)"
