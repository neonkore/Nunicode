STATIC_TARGET = libnu.a
SHARED_TARGET = libnu.so
TESTS_TARGET  = test
UTF8_SAMPLE   = utf8
DOCDIR        = doc

OBJS = libnu/cesu8.o \
       libnu/strings.o \
       libnu/utf8.o \

TESTS_OBJS = tests/cesu8_test.o \
             tests/strings_test.o \
             tests/utf8_test.o \
             tests/main.o

BUILD_OPTIONS = -DNU_WITH_EVERYTHING

CFLAGS = -Wall -Werror -std=c99 -pedantic -Os $(BUILD_OPTIONS)
SHARED_LDFLAGS = -s
TESTS_LDFLAGS = -g

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
	$(CC) samples/utf8.o $(STATIC_TARGET) -o $(UTF8_SAMPLE)

samples: $(UTF8_SAMPLE)

clean:
	rm -f "$(STATIC_TARGET)" "$(SHARED_TARGET)" "$(TESTS_TARGET)" "$(UTF8_SAMPLE)"
	rm -f *.o libnu/*.o tests/*.o samples/*.o
	rm -fr "$(DOCDIR)"
