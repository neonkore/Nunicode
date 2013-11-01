set(LIBNU_SRC
	cesu8.c
	ducet.c
	extra.c
	strcoll.c
	strings.c
	tolower.c
	toupper.c
	udb.c
	utf16.c
	utf16be.c
	utf16he.c
	utf16le.c
	utf32.c
	utf32be.c
	utf32he.c
	utf32le.c
	utf8.c
	validate.c
)

if(CMAKE_COMPILER_IS_GNUCC)
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror -pedantic -std=c99 -O3")
endif(CMAKE_COMPILER_IS_GNUCC)

add_library(nu_obj OBJECT ${LIBNU_SRC})
add_library(nu SHARED $<TARGET_OBJECTS:nu_obj>)
add_library(nu_static STATIC $<TARGET_OBJECTS:nu_obj>)
set_target_properties(nu_static PROPERTIES OUTPUT_NAME nu)

if(CMAKE_BUILD_TYPE MATCHES RELEASE)
	add_dependencies(nu_obj nu_git_version)
endif(CMAKE_BUILD_TYPE MATCHES RELEASE)

file(GLOB INCLUDES *.h)
install(FILES ${INCLUDES} DESTINATION include/libnu)
install(TARGETS nu nu_static 
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
)
