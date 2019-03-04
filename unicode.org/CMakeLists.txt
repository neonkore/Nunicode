set(DATA ${CMAKE_SOURCE_DIR}/unicode.org)
set(TOOLS ${CMAKE_SOURCE_DIR}/tools)
set(GEN ${CMAKE_SOURCE_DIR}/libnu/gen)
set(TGEN ${CMAKE_SOURCE_DIR}/tests/gen)

set(DUCET ${DATA}/allkeys.txt)
set(SORTABLE ${DATA}/sortable.tmp)
set(FILTERED ${DATA}/filtered.tmp)
set(FILTERED_CONTRACTIONS ${DATA}/filtered_contractions.tmp)
set(FILTERED_COMPACT ${DATA}/filtered_compact.tmp)
set(FILTERED_CONTRACTIONS_COMPACT ${DATA}/filtered_contractions_compact.tmp)
set(UNIDATA ${DATA}/UnicodeData.txt)
set(SPECIAL ${DATA}/SpecialCasing.txt)
set(FOLDING ${DATA}/CaseFolding.txt)
set(DECOMPS ${DATA}/decomps.txt)

add_custom_target(_ducet
	# source data
	COMMAND cat ${UNIDATA} | ${TOOLS}/unidata-tosortable >${SORTABLE}
	COMMAND cat ${DUCET} | ${TOOLS}/filter-sortable ${SORTABLE} >${FILTERED} 2>${FILTERED_CONTRACTIONS}
	COMMAND cat ${FILTERED} | ${TOOLS}/bmponly >${FILTERED_COMPACT}
	COMMAND cat ${FILTERED_CONTRACTIONS} | ${TOOLS}/bmponly >${FILTERED_CONTRACTIONS_COMPACT}
	# regular hastable
	COMMAND ${TOOLS}/filtered-tomph ${FILTERED} ${FILTERED_CONTRACTIONS}
		| ${TOOLS}/mph-indexed "NU_DUCET" 0 >${GEN}/_ducet.c
	COMMAND ${TOOLS}/contractions-toc ${FILTERED} ${FILTERED_CONTRACTIONS} "_nu_ducet" 0 >${GEN}/_ducet_switch.c
	# bmp-only hastable
	COMMAND ${TOOLS}/filtered-tomph ${FILTERED_COMPACT} ${FILTERED_CONTRACTIONS_COMPACT}
		| ${TOOLS}/mph-indexed "NU_DUCET" 1 >${GEN}/_ducet_compact.c
	COMMAND ${TOOLS}/contractions-toc ${FILTERED_COMPACT} ${FILTERED_CONTRACTIONS_COMPACT} "_nu_ducet" 1 >${GEN}/_ducet_switch_compact.c
	# tests
	COMMAND ${TOOLS}/codepoints-totests ${FILTERED} ${FILTERED_CONTRACTIONS} "nu_ducet" >${TGEN}/_ducet_test.c
	COMMAND ${TOOLS}/contractions-totests ${FILTERED} ${FILTERED_CONTRACTIONS} "_nu_ducet" >${TGEN}/_ducet_switch_test.c
	COMMAND ${TOOLS}/codepoints-totests ${FILTERED_COMPACT} ${FILTERED_CONTRACTIONS_COMPACT} "nu_ducet" >${TGEN}/_ducet_compact_test.c
	COMMAND ${TOOLS}/contractions-totests ${FILTERED_COMPACT} ${FILTERED_CONTRACTIONS_COMPACT} "_nu_ducet" >${TGEN}/_ducet_switch_compact_test.c
	# cleanup
	COMMAND rm -f "${SORTABLE}"
	COMMAND rm -f "${FILTERED}"
	COMMAND rm -f "${FILTERED_CONTRACTIONS}"
	COMMAND rm -f "${FILTERED_COMPACT}"
	COMMAND rm -f "${FILTERED_CONTRACTIONS_COMPACT}"
)

add_custom_target(_toupper
	COMMAND echo -n && (cat ${UNIDATA} | ${TOOLS}/unidata-toupper
		&& cat ${SPECIAL} | ${TOOLS}/special-toupper)
	| ${TOOLS}/mph-combined "NU_TOUPPER" 0 >${GEN}/_toupper.c
	COMMAND echo -n && (cat ${UNIDATA} | ${TOOLS}/unidata-toupper
		&& cat ${SPECIAL} | ${TOOLS}/special-toupper)
	| ${TOOLS}/bmponly | ${TOOLS}/mph-combined "NU_TOUPPER" 1 >${GEN}/_toupper_compact.c
)

add_custom_target(_tolower
	COMMAND echo -n && (cat ${UNIDATA} | ${TOOLS}/unidata-tolower
		&& cat ${SPECIAL} | ${TOOLS}/special-tolower)
	| ${TOOLS}/mph-combined "NU_TOLOWER" 0 >${GEN}/_tolower.c
	COMMAND echo -n && (cat ${UNIDATA} | ${TOOLS}/unidata-tolower
		&& cat ${SPECIAL} | ${TOOLS}/special-tolower)
	| ${TOOLS}/bmponly | ${TOOLS}/mph-combined "NU_TOLOWER" 1 >${GEN}/_tolower_compact.c
)

add_custom_target(_tofold
	COMMAND echo -n && cat ${FOLDING} | ${TOOLS}/casefolding-tofolding
	| ${TOOLS}/mph-combined "NU_TOFOLD" 0 >${GEN}/_tofold.c
	COMMAND echo -n && cat ${FOLDING} | ${TOOLS}/casefolding-tofolding
	| ${TOOLS}/bmponly | ${TOOLS}/mph-combined "NU_TOFOLD" 1 >${GEN}/_tofold_compact.c
)

add_custom_target(_tounaccent
	COMMAND echo -n && cat ${DECOMPS} | ${TOOLS}/decomps-tounaccent
	| ${TOOLS}/mph-combined "NU_TOUNACCENT" 0 >${GEN}/_tounaccent.c
	COMMAND echo -n && cat ${DECOMPS} | ${TOOLS}/decomps-tounaccent
	| ${TOOLS}/bmponly | ${TOOLS}/mph-combined "NU_TOUNACCENT" 1 >${GEN}/_tounaccent_compact.c
)

add_custom_target(gen DEPENDS _toupper _tolower _tofold _ducet _tounaccent)
