include_directories(${CMAKE_SOURCE_DIR} ${SQLITE3_INCLUDE_DIR} ".")

if(NOT CMAKE_BUILD_TYPE)
	add_subdirectory(samples)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DNU_DYNAMIC_EXTENSION")
link_libraries(nu)
add_library(nunicode SHARED nu.c)
