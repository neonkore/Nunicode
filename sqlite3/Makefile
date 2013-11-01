STATIC_TARGET = libnusqlite3.a
SHARED_TARGET = libnusqlite3.so
LIBNU         ?= 
GIT_REVISION  = $$(expr substr $$(git rev-parse HEAD) 1 8)

OBJS = nu.o \

BUILD_OPTIONS = -DNU_WITH_EVERYTHING

CFLAGS ?= -fPIC -Wall -Wextra -Werror -std=c99 -pedantic -Os $(BUILD_OPTIONS)
SHARED_LDFLAGS ?= -s

default: clean version $(STATIC_TARGET) $(SHARED_TARGET)
all: default

%.o:%.c
	$(CC) -I .. $(CFLAGS) -c "$<" -o "$@"

version:
	echo "#define NU_SQLITE3_EXT_VERSION \"$(GIT_REVISION)\"" >version.h

$(STATIC_TARGET): $(OBJS)
	$(AR) crs "$(STATIC_TARGET)" $(OBJS)

$(SHARED_TARGET): $(OBJS)
	$(CC) $(OBJS) $(LIBNU) -shared -o "$(SHARED_TARGET)" $(SHARED_LDFLAGS)

tests: $(STATIC_TARGET)
	cat tests.sql | ./testsuite | sqlite3 | tee /dev/stderr | (grep "FAILED" && exit 1 || exit 0)

clean:
	rm -f "$(STATIC_TARGET)" "$(SHARED_TARGET)"
	rm -f *.o
