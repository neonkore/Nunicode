set(DATA ${CMAKE_SOURCE_DIR}/unicode.org)
set(TOOLS ${CMAKE_SOURCE_DIR}/tools)
set(GEN ${CMAKE_SOURCE_DIR}/libnu/gen)

set(DUCET ${DATA}/allkeys.txt)
set(SORTABLE ${DATA}/sortable.tmp)
set(UNIDATA ${DATA}/UnicodeData.txt)
set(SPECIAL ${DATA}/SpecialCasing.txt)
set(FOLDING ${DATA}/CaseFolding.txt)

add_custom_target(_ducet
	COMMAND cat ${UNIDATA} | ${TOOLS}/unidata-tosortable >${SORTABLE}
	COMMAND cat ${DUCET} | ${TOOLS}/allkeys-tokeys | ${TOOLS}/filter-sortable ${SORTABLE}
		| ${TOOLS}/mph-indexed >${GEN}/_ducet.h
	COMMAND rm ${SORTABLE}
)

add_custom_target(_toupper
	COMMAND echo -n && (cat ${UNIDATA} | ${TOOLS}/unidata-toupper
		&& cat ${SPECIAL} | ${TOOLS}/special-toupper)
	| ${TOOLS}/mph-combined >${GEN}/_toupper.h
)

add_custom_target(_tolower
	COMMAND echo -n && (cat ${UNIDATA} | ${TOOLS}/unidata-tolower
		&& cat ${SPECIAL} | ${TOOLS}/special-tolower)
	| ${TOOLS}/mph-combined >${GEN}/_tolower.h
)

add_custom_target(_tofolding
	COMMAND echo -n && cat ${FOLDING} | ${TOOLS}/casefolding-tofolding
	| ${TOOLS}/mph-combined >${GEN}/_tofold.h
)

add_custom_target(gen DEPENDS _toupper _tolower _tofolding _ducet)
