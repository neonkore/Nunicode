include_directories(${CMAKE_SOURCE_DIR})

add_library(nusqlite3_obj OBJECT nu.c)

link_libraries(nusqlite3 nu_static)
add_library(nusqlite3 SHARED $<TARGET_OBJECTS:nusqlite3_obj>)

add_library(nusqlite3_static STATIC $<TARGET_OBJECTS:nusqlite3_obj>)
set_target_properties(nusqlite3_static PROPERTIES OUTPUT_NAME nusqlite3)
