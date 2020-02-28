macro(GOTOOL TOOLNAME TOOLSRC)
	set(GOBIN go)
	add_custom_command(
		# TODO: move binaries to build dir
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
		OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/${TOOLNAME}
		COMMAND ${GOBIN} build -o ${TOOLNAME} ${TOOLSRC}
		DEPENDS ${TOOLSRC}
	)
endmacro()

set(BMPONLY_SRC
	bmponly.go
)
GOTOOL(bmponly "${BMPONLY_SRC}")

set(UNIDATA_TOLOWER_SRC
	unidata-tolower.go
	unidata.go
)
GOTOOL(unidata-tolower "${UNIDATA_TOLOWER_SRC}")

set(UNIDATA_TOUPPER_SRC
	unidata-toupper.go
	unidata.go
)
GOTOOL(unidata-toupper "${UNIDATA_TOUPPER_SRC}")

set(SPECIAL_TOLOWER_SRC
	special-tolower.go
	specialcasing.go
	unidata.go
)
GOTOOL(special-tolower "${SPECIAL_TOLOWER_SRC}")

set(SPECIAL_TOUPPER_SRC
	special-toupper.go
	specialcasing.go
	unidata.go
)
GOTOOL(special-toupper "${SPECIAL_TOUPPER_SRC}")

set(CASEFOLDING_TOFOLDING_SRC
	casefolding-tofolding.go
	casefolding.go
	unidata.go
)
GOTOOL(casefolding-tofolding "${CASEFOLDING_TOFOLDING_SRC}")

set(UNIDATA_TOSORTABLE_SRC
	unidata-tosortable.go
	unidata.go
)
GOTOOL(unidata-tosortable "${UNIDATA_TOSORTABLE_SRC}")

set(DECOMPS_TOUNACCENT_SRC
	decomps-tounaccent.go
	decomps.go
	unidata.go
)
GOTOOL(decomps-tounaccent "${DECOMPS_TOUNACCENT_SRC}")

set(FILTER_SORTABLE_SRC
	filter-sortable.go
	allkeys.go
	unidata.go
)
GOTOOL(filter-sortable "${FILTER_SORTABLE_SRC}")

add_custom_target(tools
	DEPENDS bmponly
	DEPENDS unidata-tolower unidata-toupper
	DEPENDS special-tolower special-toupper
	DEPENDS casefolding-tofolding
	DEPENDS unidata-tosortable filter-sortable
	DEPENDS decomps-tounaccent
)
