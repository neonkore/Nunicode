set(UNIDATA_TOLOWER_SRC
	unidata-tolower.go
	unidata.go
)
add_custom_command(
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/unidata-tolower
	COMMAND go build ${UNIDATA_TOLOWER_SRC}
	DEPENDS ${UNIDATA_TOLOWER_SRC}
)

set(UNIDATA_TOUPPER_SRC
	unidata-toupper.go
	unidata.go
)
add_custom_command(
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/unidata-toupper
	COMMAND go build ${UNIDATA_TOUPPER_SRC}
	DEPENDS ${UNIDATA_TOUPPER_SRC}
)

add_custom_target(tools
	DEPENDS unidata-tolower unidata-toupper
)
