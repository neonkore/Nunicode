cmake_minimum_required (VERSION 2.6) 
project(libnu C)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
set(NU_BUILD_OPTIONS "-DNU_WITH_EVERYTHING")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${NU_BUILD_OPTIONS}")

if(CMAKE_COMPILER_IS_GNUCC)
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror -pedantic -std=c99")
	
	if(NOT CMAKE_BUILD_TYPE MATCHES RELEASE)
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -ggdb -O0")
	else(NOT CMAKE_BUILD_TYPE MATCHES RELEASE)
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3")
	endif(NOT CMAKE_BUILD_TYPE MATCHES RELEASE)
endif(CMAKE_COMPILER_IS_GNUCC)

add_subdirectory(libnu)
add_subdirectory(tests)
add_subdirectory(samples)
add_subdirectory(unicode.org)

find_package(Sqlite3)
if(SQLITE3_FOUND)
	add_subdirectory(sqlite3)
endif(SQLITE3_FOUND)
