link_libraries(nu sqlite3)
add_executable(../autoextension autoextension.c ../nusqlite3.c)
add_executable(../loadextension loadextension.c)
