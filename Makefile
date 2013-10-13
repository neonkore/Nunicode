STATIC_TARGET = libnu.a
SHARED_TARGET = libnu.so
TESTS_TARGET  = tests/test
UTF8_SAMPLE   = samples/utf8
UTF16_SAMPLE  = samples/utf16
REVR_SAMPLE   = samples/revread
DOCDIR        = doc

OBJS = libnu/cesu8.o \
       libnu/extra.o \
       libnu/strings.o \
       libnu/utf16.o \
       libnu/utf16be.o \
       libnu/utf16le.o \
       libnu/utf32.o \
       libnu/utf32be.o \
       libnu/utf32le.o \
       libnu/utf8.o \

TESTS_OBJS = tests/cesu8_test.o \
             tests/extra_test.o \
             tests/strings_test.o \
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

DOCDIR = "doc"

default: clean $(STATIC_TARGET) $(SHARED_TARGET)
all: default $(TESTS_TARGET) samples

%.o:%.c
	$(CC) -I . $(CFLAGS) -c "$<" -o "$@"

$(STATIC_TARGET): $(OBJS)
	$(AR) crs "$(STATIC_TARGET)" $(OBJS)

$(SHARED_TARGET): $(OBJS)
	$(CC) $(OBJS) -shared -o "$(SHARED_TARGET)" "$(SHARED_LDFLAGS)"

$(TESTS_TARGET): $(STATIC_TARGET) $(TESTS_OBJS)
	$(CC) $(TESTS_OBJS) $(STATIC_TARGET) -o $(TESTS_TARGET) $(TESTS_LDFLAGS)

$(UTF8_SAMPLE): samples/utf8.o
	$(CC) samples/utf8.o $(STATIC_TARGET) -o $(UTF8_SAMPLE) $(SAMPLES_LDFLAGS)

$(UTF16_SAMPLE): samples/utf16.o
	$(CC) samples/utf16.o $(STATIC_TARGET) -o $(UTF16_SAMPLE) $(SAMPLES_LDFLAGS)

$(REVR_SAMPLE): samples/revread.o
	$(CC) samples/revread.o $(STATIC_TARGET) -o $(REVR_SAMPLE) $(SAMPLES_LDFLAGS)

samples: $(UTF8_SAMPLE) $(UTF16_SAMPLE) $(REVR_SAMPLE)

clean:
	rm -f "$(STATIC_TARGET)" "$(SHARED_TARGET)"
	rm -f "$(TESTS_TARGET)"
	rm -f "$(UTF8_SAMPLE)" "$(UTF16_SAMPLE)" "$(REVR_SAMPLE)"
	rm -f *.o libnu/*.o tests/*.o samples/*.o
	rm -fr "$(DOCDIR)"
