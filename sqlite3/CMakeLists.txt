include_directories(${CMAKE_SOURCE_DIR} ${SQLITE3_INCLUDE_DIR} ".")

if(NU_BUILD_SAMPLES)
	add_subdirectory(samples)
endif(NU_BUILD_SAMPLES)

option(NU_SQLITE_OMIT_UTF16 "Omit UTF16 in SQLite extension build" OFF)

if(NU_SQLITE_OMIT_UTF16)
	add_definitions(-DNU_SQLITE_OMIT_UTF16)
endif()

link_libraries(nu)
add_library(nusqlite3-static STATIC nusqlite3.c)
add_library(nusqlite3 SHARED nusqlite3.c)
set_target_properties(nusqlite3 PROPERTIES COMPILE_DEFINITIONS NU_DYNAMIC_EXTENSION=1)
