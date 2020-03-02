macro(GOTOOL TOOLNAME TOOLSRC)
	set(GOBIN go)
	set(DST ${CMAKE_CURRENT_BINARY_DIR}/${TOOLNAME})
	add_custom_command(
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
		OUTPUT ${DST}
		COMMAND ${GOBIN}
		ARGS build
		ARGS -o ${DST}
		ARGS ${TOOLSRC}
		DEPENDS ${TOOLSRC}
	)
endmacro()

set(BMPONLY_SRC
	bmponly.go
)
GOTOOL(bmponly "${BMPONLY_SRC}")

set(UNIDATA_TOLOWER_SRC
	unidata-tolower.go
	unicodedata.go
)
GOTOOL(unidata-tolower "${UNIDATA_TOLOWER_SRC}")

set(UNIDATA_TOUPPER_SRC
	unidata-toupper.go
	unicodedata.go
)
GOTOOL(unidata-toupper "${UNIDATA_TOUPPER_SRC}")

set(SPECIAL_TOLOWER_SRC
	special-tolower.go
	specialcasing.go
	unicodedata.go
)
GOTOOL(special-tolower "${SPECIAL_TOLOWER_SRC}")

set(SPECIAL_TOUPPER_SRC
	special-toupper.go
	specialcasing.go
	unicodedata.go
)
GOTOOL(special-toupper "${SPECIAL_TOUPPER_SRC}")

set(CASEFOLDING_TOFOLDING_SRC
	casefolding-tofolding.go
	casefolding.go
	unicodedata.go
)
GOTOOL(casefolding-tofolding "${CASEFOLDING_TOFOLDING_SRC}")

set(UNIDATA_TOSORTABLE_SRC
	unidata-tosortable.go
	unicodedata.go
)
GOTOOL(unidata-tosortable "${UNIDATA_TOSORTABLE_SRC}")

set(FILTER_SORTABLE_SRC
	allkeys.go
	filter-sortable.go
	unicodedata.go
)
GOTOOL(filter-sortable "${FILTER_SORTABLE_SRC}")

set(FILTERED_TOMPH_SRC
	allkeys.go
	contractions.go
	filtered-tomph.go
)
GOTOOL(filtered-tomph "${FILTERED_TOMPH_SRC}")

set(DECOMPS_TOUNACCENT_SRC
	decomps-tounaccent.go
	decomps.go
	unicodedata.go
)
GOTOOL(decomps-tounaccent "${DECOMPS_TOUNACCENT_SRC}")

set(MPH_COMBINED_SRC
	mph.go
	mph-combined.go
	templates.go
)
GOTOOL(mph-combined "${MPH_COMBINED_SRC}")

set(MPH_INDEXED_SRC
	mph.go
	mph-indexed.go
	templates.go
)
GOTOOL(mph-indexed "${MPH_INDEXED_SRC}")

add_custom_target(tools
	DEPENDS bmponly
	DEPENDS unidata-tolower unidata-toupper
	DEPENDS special-tolower special-toupper
	DEPENDS casefolding-tofolding
	DEPENDS unidata-tosortable filter-sortable filtered-tomph
	DEPENDS decomps-tounaccent
	DEPENDS mph-combined mph-indexed
)
