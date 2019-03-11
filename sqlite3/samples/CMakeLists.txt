link_libraries(nu sqlite3)

add_executable(autoextension autoextension.c)
target_link_libraries(autoextension nusqlite3-static)
set_target_properties(autoextension
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ..
)

add_executable(loadextension loadextension.c)
set_target_properties(loadextension
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ..
)
