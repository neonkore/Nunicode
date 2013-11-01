cmake_minimum_required (VERSION 2.8.8) 
project(nu)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
set(NU_BUILD_OPTIONS "-DNU_WITH_EVERYTHING")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${NU_BUILD_OPTIONS}")

add_subdirectory(libnu)
add_subdirectory(tests)
add_subdirectory(samples)
add_subdirectory(unicode.org)

find_package(Sqlite3)
if(SQLITE3_FOUND)
	add_subdirectory(sqlite3)
endif(SQLITE3_FOUND)
