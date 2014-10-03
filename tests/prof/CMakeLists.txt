include_directories(${CMAKE_SOURCE_DIR})

link_libraries(icui18n icuuc icudata)
add_executable(strcoll_icu strcoll_icu.c)
add_executable(strcasecoll_icu strcasecoll_icu.c)
add_executable(iter_icu iter_icu.c)

link_libraries(nu)
add_executable(strcoll_nu strcoll_nu.c)
add_executable(strcasecoll_nu strcasecoll_nu.c)
add_executable(iter_nu iter_nu.c)
