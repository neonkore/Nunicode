cmake_minimum_required (VERSION 2.6)
project(libnu C)

set(NU_BUILD_OPTIONS "-DNU_WITH_EVERYTHING")
add_definitions(-DNU_BUILD_STATIC)
add_definitions(-DNU_DISABLE_CONTRACTIONS)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${NU_BUILD_OPTIONS}")

if("${CMAKE_C_COMPILER_ID}" STREQUAL "GNU" OR "${CMAKE_C_COMPILER_ID}" STREQUAL "Clang")
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror -pedantic -std=c99")

	if(NOT DEFINED WIN32)
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
	endif(NOT DEFINED WIN32)

	if(NOT CMAKE_BUILD_TYPE) # defaults to debug
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0 -g -ggdb")
	endif(NOT CMAKE_BUILD_TYPE)

	if(CMAKE_BUILD_TYPE MATCHES PROF)
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -g -ggdb")
	endif(CMAKE_BUILD_TYPE MATCHES PROF)

	if(CMAKE_BUILD_TYPE MATCHES GCOV)
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fprofile-arcs -ftest-coverage")
	endif(CMAKE_BUILD_TYPE MATCHES GCOV)
endif("${CMAKE_C_COMPILER_ID}" STREQUAL "GNU" OR "${CMAKE_C_COMPILER_ID}" STREQUAL "Clang")

if("${CMAKE_C_COMPILER_ID}" STREQUAL "GNU")
	if(CMAKE_BUILD_TYPE MATCHES RELEASE)
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fdata-sections -ffunction-sections")
		set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--gc-sections")
		set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--gc-sections")
	endif(CMAKE_BUILD_TYPE MATCHES RELEASE)
endif("${CMAKE_C_COMPILER_ID}" STREQUAL "GNU")

add_subdirectory(libnu)
add_subdirectory(unicode.org)

if(NOT CMAKE_BUILD_TYPE)
	add_subdirectory(samples)
endif(NOT CMAKE_BUILD_TYPE)

if(NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE MATCHES GCOV)
	add_subdirectory(tests)
endif(NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE MATCHES GCOV)

find_package(Sqlite3)

if(CMAKE_BUILD_TYPE MATCHES PROF)
	add_subdirectory(tests/prof)
	
	if(SQLITE3_FOUND)
		add_subdirectory(sqlite3/prof)
	endif(SQLITE3_FOUND)
endif(CMAKE_BUILD_TYPE MATCHES PROF)

if(SQLITE3_FOUND)
	add_subdirectory(sqlite3)
endif(SQLITE3_FOUND)
