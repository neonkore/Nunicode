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

set(SPECIAL_TOUPPER_SRC
	special-toupper.go
	specialcasing.go
	unidata.go
)
add_custom_command(
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/special-toupper
	COMMAND go build ${SPECIAL_TOUPPER_SRC}
	DEPENDS ${SPECIAL_TOUPPER_SRC}
)

set(SPECIAL_TOLOWER_SRC
	special-tolower.go
	specialcasing.go
	unidata.go
)
add_custom_command(
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/special-tolower
	COMMAND go build ${SPECIAL_TOLOWER_SRC}
	DEPENDS ${SPECIAL_TOLOWER_SRC}
)

set(CASEFOLDING_TOFOLDING_SRC
	casefolding-tofolding.go
	casefolding.go
	unidata.go
)
add_custom_command(
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/casefolding-tofolding
	COMMAND go build ${CASEFOLDING_TOFOLDING_SRC}
	DEPENDS ${CASEFOLDING_TOFOLDING_SRC}
)

add_custom_target(tools
	DEPENDS unidata-tolower unidata-toupper
	DEPENDS special-toupper special-tolower
	DEPENDS casefolding-tofolding
)
