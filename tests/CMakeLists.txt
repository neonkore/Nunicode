set(TESTS_SRC
	casemap_test.c
	cesu8_test.c
	conformance_test.c
	ducet_test.c
	extra_test.c
	main.c
	mph_test.c
	strcoll_test.c
	strcoll_internal_test.c
	strings_test.c
	switch_test_base.c
	udb_test.c
	unaccent_test.c
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

if(NU_WITH_BMP_ONLY)
	list(APPEND
		TESTS_SRC
		gen/_ducet_compact_test.c
		gen/_ducet_switch_compact_test.c
	)
else()
	list(APPEND
		TESTS_SRC
		gen/_ducet_test.c
		gen/_ducet_switch_test.c
	)
endif()

include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR})

link_libraries(nu)
add_executable(units ${TESTS_SRC})

add_custom_target(coverage DEPENDS units
	COMMAND units
	COMMAND lcov --rc lcov_branch_coverage=1 -b ${CMAKE_SOURCE_DIR} -d ${CMAKE_SOURCE_DIR} -c -o coverage.info
	COMMAND genhtml --rc lcov_branch_coverage=1 -o ${CMAKE_SOURCE_DIR}/tests/coverage coverage.info
)
