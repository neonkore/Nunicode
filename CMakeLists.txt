cmake_minimum_required (VERSION 2.6)
project(libnu C)

set(NU_BUILD_OPTIONS "-DNU_WITH_EVERYTHING")

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${NU_BUILD_OPTIONS}")

if(CMAKE_COMPILER_IS_GNUCC)
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror -pedantic -std=c99")

	if(NOT DEFINED WIN32)
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
	endif(NOT DEFINED WIN32)

	if(CMAKE_BUILD_TYPE MATCHES RELEASE)
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fdata-sections -ffunction-sections")
		set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--gc-sections")
		set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--gc-sections")
	else(CMAKE_BUILD_TYPE MATCHES RELEASE)
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0 -g -ggdb")
	endif(CMAKE_BUILD_TYPE MATCHES RELEASE)
endif(CMAKE_COMPILER_IS_GNUCC)

if(CMAKE_BUILD_TYPE MATCHES GCOV)
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fprofile-arcs -ftest-coverage")
endif(CMAKE_BUILD_TYPE MATCHES GCOV)

add_subdirectory(libnu)
add_subdirectory(tests/icu)
add_subdirectory(samples)
add_subdirectory(unicode.org)

if(NOT CMAKE_BUILD_TYPE MATCHES RELEASE)
	add_subdirectory(tests)
endif(NOT CMAKE_BUILD_TYPE MATCHES RELEASE)

find_package(Sqlite3)
if(SQLITE3_FOUND)
	add_subdirectory(sqlite3)
endif(SQLITE3_FOUND)
