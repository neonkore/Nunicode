include_directories(${CMAKE_SOURCE_DIR} ${SQLITE3_INCLUDE_DIR} "..")

link_libraries(nu sqlite3)
add_executable(casemapping casemapping.c ../nusqlite3.c)
add_executable(like like.c ../nusqlite3.c)

add_definitions(-DNU_SQLITE_COLLATION_NAME="NUCURRENT")  # silence warning
