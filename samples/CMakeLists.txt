include_directories(${CMAKE_SOURCE_DIR})
link_libraries(nu)

add_executable(utf8    utf8.c)
add_executable(utf16   utf16.c)
add_executable(revread revread.c)
add_executable(folding folding.c)
add_executable(special_casing special_casing.c)
