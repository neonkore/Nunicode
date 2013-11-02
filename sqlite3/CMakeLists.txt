include_directories(${CMAKE_SOURCE_DIR} ${SQLITE3_INCLUDE_DIR})

link_libraries(nusqlite3 nu)
add_library(nusqlite3 SHARED nu.c)
