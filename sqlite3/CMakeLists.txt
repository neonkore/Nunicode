include_directories(${CMAKE_SOURCE_DIR} ${SQLITE3_INCLUDE_DIR} ".")

if(NU_BUILD_SAMPLES)
	add_subdirectory(samples)
endif(NU_BUILD_SAMPLES)

add_definitions(-DNU_DYNAMIC_EXTENSION)
link_libraries(nu)
add_library(nusqlite3 SHARED nusqlite3.c)
