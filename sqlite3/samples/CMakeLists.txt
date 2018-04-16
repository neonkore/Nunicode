link_libraries(nu sqlite3)
add_executable(../autoextension autoextension.c)
target_link_libraries(../autoextension nusqlite3-static)
add_executable(../loadextension loadextension.c)
