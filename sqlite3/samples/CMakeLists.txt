link_libraries(nu sqlite3)
add_executable(../autoextension autoextension.c ../nu.c)
add_executable(../loadextension loadextension.c)
