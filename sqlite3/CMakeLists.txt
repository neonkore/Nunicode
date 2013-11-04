include_directories(${CMAKE_SOURCE_DIR} ${SQLITE3_INCLUDE_DIR} ".")

add_subdirectory(samples)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DNU_DYNAMIC_EXTENSION")
link_libraries(nu)
add_library(nusqlite3 SHARED nu.c)
