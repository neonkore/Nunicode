include_directories(${CMAKE_SOURCE_DIR})
link_libraries(nu_static)

add_executable(utf8    utf8.c)
add_executable(utf16   utf16.c)
add_executable(revread revread.c)
add_executable(folding folding.c)
