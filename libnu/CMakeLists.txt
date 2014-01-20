set(LIBNU_SRC
	cesu8.c
	ducet.c
	extra.c
	strcoll.c
	strcoll_internal.c
	strings.c
	tolower.c
	toupper.c
	udb.c
	utf16.c
	utf16be.c
	utf16he.c
	utf16le.c
	utf32.c
	utf32be.c
	utf32he.c
	utf32le.c
	utf8.c
	validate.c
)

add_library(nu STATIC ${LIBNU_SRC})

file(GLOB INCLUDES *.h)
install(FILES ${INCLUDES} DESTINATION include/libnu)
install(TARGETS nu
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
)
