set(TESTS_SRC
	casemap_test.c
	cesu8_test.c
	conformance_test.c
	ducet_test.c
	extra_test.c
	gen/_ducet_test.c
	gen/_ducet_switch_test.c
	main.c
	mph_test.c
	strcoll_test.c
	strcoll_internal_test.c
	strings_test.c
	switch_test_base.c
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
	version_test.c
)

include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR})

link_libraries(nu)
add_executable(units ${TESTS_SRC})

add_custom_target(coverage DEPENDS units
	COMMAND units
	COMMAND lcov -b ${CMAKE_SOURCE_DIR} -d ${CMAKE_SOURCE_DIR} -c -o coverage.info
	COMMAND genhtml -o ${CMAKE_SOURCE_DIR}/tests/coverage coverage.info
)
