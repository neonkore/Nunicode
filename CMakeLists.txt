cmake_minimum_required (VERSION 2.8.12)
project(libnu C)

option(NU_BUILD_TESTS "Build tests, only with Debug config" OFF)
option(NU_BUILD_SAMPLES "Build samples" OFF)
option(NU_WITH_BMP_ONLY "Build collations with BMP-support only" OFF)
option(NU_BUILD_TOOLS "Build tools (requires Go)" OFF)

set(NU_BUILD_OPTIONS "-DNU_WITH_EVERYTHING")
add_definitions(-DNU_BUILD_STATIC)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
find_package(Sqlite3)

if(NU_BUILD_TESTS)
	set(CMAKE_CONFIGURATION_TYPES "Debug") # restrict configurations to Debug
	set(CMAKE_BUILD_TYPE "Debug")
endif()

if(NU_WITH_BMP_ONLY)
	add_definitions(-DNU_WITH_BMP_ONLY)
endif()

if(CMAKE_BUILD_TYPE MATCHES "GCOV")
	set(CMAKE_CONFIGURATION_TYPES "GCOV") # restrict configurations to GCOV
	set(NU_BUILD_TESTS 1)
elseif(CMAKE_BUILD_TYPE MATCHES "PROF")
	set(CMAKE_CONFIGURATION_TYPES "PROF") # restrict configurations to PROF
endif()

if(CMAKE_C_COMPILER_ID STREQUAL "GNU" OR (NOT MSVC AND CMAKE_C_COMPILER_ID STREQUAL "Clang"))
	if(NOT WIN32)
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
	endif(NOT WIN32)
endif()

if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror -pedantic -std=c99") # -Wall shouldn't be enabled for clang

	if(CMAKE_BUILD_TYPE MATCHES "PROF")
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -g -ggdb")
	elseif(CMAKE_BUILD_TYPE MATCHES "GCOV")
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -ggdb -fprofile-arcs -ftest-coverage")
	endif()
endif()

if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
	set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections -ffunction-sections")
	set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -s -Wl,--gc-sections")
	set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} -s -Wl,--gc-sections")
endif(CMAKE_C_COMPILER_ID STREQUAL "GNU")

add_subdirectory(libnu)

if(NU_BUILD_SAMPLES)
	add_subdirectory(samples)
endif(NU_BUILD_SAMPLES)

if(NU_BUILD_TESTS)
	add_subdirectory(tests)
endif(NU_BUILD_TESTS)

if(NU_BUILD_TOOLS)
	add_subdirectory(tools)
	add_subdirectory(unicode.org)
endif(NU_BUILD_TOOLS)

if(CMAKE_BUILD_TYPE MATCHES PROF)
	add_subdirectory(tests/prof)
	if(SQLITE3_FOUND)
		add_subdirectory(sqlite3/prof)
	endif(SQLITE3_FOUND)
endif(CMAKE_BUILD_TYPE MATCHES PROF)

if(SQLITE3_FOUND)
	add_subdirectory(sqlite3)
endif(SQLITE3_FOUND)
