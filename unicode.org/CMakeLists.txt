set(DATA ${CMAKE_SOURCE_DIR}/unicode.org)
set(TOOLS ${CMAKE_SOURCE_DIR}/tools)
set(GEN ${CMAKE_SOURCE_DIR}/libnu/gen)

set(DECOMPS ${DATA}/decomps.txt)
set(UNIDATA ${DATA}/UnicodeData.txt)
set(SPECIAL ${DATA}/SpecialCasing.txt)

add_custom_target(_decomps
	COMMAND cat ${DECOMPS} | ${TOOLS}/decomps-tokeys | ${TOOLS}/mph >${GEN}/_decomps.h
)

add_custom_target(_toupper
	COMMAND echo -n && (cat ${UNIDATA} | ${TOOLS}/unidata-toupper
		&& cat ${SPECIAL} | ${TOOLS}/special-toupper)
	| ${TOOLS}/mph >${GEN}/_toupper.h
)

add_custom_target(_tolower
	COMMAND echo -n && (cat ${UNIDATA} | ${TOOLS}/unidata-tolower
		&& cat ${SPECIAL} | ${TOOLS}/special-tolower)
	| ${TOOLS}/mph >${GEN}/_tolower.h
)

add_custom_target(gen DEPENDS _decomps _toupper _tolower)
