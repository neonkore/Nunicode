set(TESTS_SRC
	casemap_test.c
	cesu8_test.c
	decomps_test.c
	extra_test.c
	fnv_test.c
	main.c
	strcoll_test.c
	strings_test.c
	udb_test.c
	utf16_test.c
	utf16be_test.c
	utf16he_test.c
	utf16le_test.c
	utf32_test.c
	utf32be_test.c
	utf32he_test.c
	utf32le_test.c
	utf8_test.c
	validation_test.c
)

include_directories(${CMAKE_SOURCE_DIR})

link_libraries(units nu)
add_executable(units ${TESTS_SRC})
