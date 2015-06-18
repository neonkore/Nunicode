set(DATA ${CMAKE_SOURCE_DIR}/unicode.org)
set(TOOLS ${CMAKE_SOURCE_DIR}/tools)
set(GEN ${CMAKE_SOURCE_DIR}/libnu/gen)
set(TGEN ${CMAKE_SOURCE_DIR}/tests/gen)

set(DUCET ${DATA}/allkeys.txt)
set(SORTABLE ${DATA}/sortable.tmp)
set(FILTERED ${DATA}/filtered.tmp)
set(FILTERED_CONTRACTIONS ${DATA}/filtered_contractions.tmp)
set(UNIDATA ${DATA}/UnicodeData.txt)
set(SPECIAL ${DATA}/SpecialCasing.txt)
set(FOLDING ${DATA}/CaseFolding.txt)

add_custom_target(_ducet
	COMMAND cat ${UNIDATA} | ${TOOLS}/unidata-tosortable >${SORTABLE}
	COMMAND cat ${DUCET} | ${TOOLS}/filter-sortable ${SORTABLE} >${FILTERED} 2>${FILTERED_CONTRACTIONS}
	COMMAND ${TOOLS}/codepoints-totests ${FILTERED} ${FILTERED_CONTRACTIONS} "nu_ducet" >${TGEN}/_ducet_test.c
	COMMAND ${TOOLS}/contractions-totests ${FILTERED} ${FILTERED_CONTRACTIONS} "_nu_ducet" >${TGEN}/_ducet_switch_test.c
	COMMAND ${TOOLS}/contractions-toc ${FILTERED} ${FILTERED_CONTRACTIONS} "_nu_ducet" >${GEN}/_ducet_switch.c
	COMMAND ${TOOLS}/filtered-tomph ${FILTERED} ${FILTERED_CONTRACTIONS} 
		| ${TOOLS}/mph-indexed "NU_DUCET" >${GEN}/_ducet.c
	COMMAND rm -f "${SORTABLE}"
	COMMAND rm -f "${FILTERED}"
	COMMAND rm -f "${FILTERED_CONTRACTIONS}"
)

add_custom_target(_toupper
	COMMAND echo -n && (cat ${UNIDATA} | ${TOOLS}/unidata-toupper
		&& cat ${SPECIAL} | ${TOOLS}/special-toupper)
	| ${TOOLS}/mph-combined "NU_TOUPPER" >${GEN}/_toupper.c
)

add_custom_target(_tolower
	COMMAND echo -n && (cat ${UNIDATA} | ${TOOLS}/unidata-tolower
		&& cat ${SPECIAL} | ${TOOLS}/special-tolower)
	| ${TOOLS}/mph-combined "NU_TOLOWER" >${GEN}/_tolower.c
)

add_custom_target(_tofold
	COMMAND echo -n && cat ${FOLDING} | ${TOOLS}/casefolding-tofolding
	| ${TOOLS}/mph-combined "NU_TOFOLD" >${GEN}/_tofold.c
)

add_custom_target(gen DEPENDS _toupper _tolower _tofold _ducet)
