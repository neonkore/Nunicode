cmake_minimum_required (VERSION 2.8.12)
project(libnu-samples C)

# modifications for cmake-testbuild.sh
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
	find_package(nunicode REQUIRED)
else(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
	add_library(nunicode::nu ALIAS nu)
endif(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${CMAKE_SOURCE_DIR})
link_libraries(nunicode::nu) # see mods above

add_executable(utf8    utf8.c)
add_executable(utf16   utf16.c)
add_executable(revread revread.c)
add_executable(folding folding.c)
add_executable(special_casing special_casing.c)
