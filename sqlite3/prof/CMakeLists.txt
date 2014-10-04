include_directories(${CMAKE_SOURCE_DIR} ${SQLITE3_INCLUDE_DIR} "..")

link_libraries(nu sqlite3)
add_executable(casemapping casemapping.c ../nu.c)
