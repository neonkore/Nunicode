include_directories(${CMAKE_SOURCE_DIR} ${SQLITE3_INCLUDE_DIR} ".")

if(NU_BUILD_SAMPLES)
	add_subdirectory(samples)
endif(NU_BUILD_SAMPLES)

link_libraries(nu)
add_library(nusqlite3-static STATIC nusqlite3.c)
add_library(nusqlite3 SHARED nusqlite3.c)
set_target_properties(nusqlite3 PROPERTIES COMPILE_DEFINITIONS NU_DYNAMIC_EXTENSION=1)
