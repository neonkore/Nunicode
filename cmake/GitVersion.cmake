if(CMAKE_BUILD_TYPE MATCHES RELEASE)
	execute_process(COMMAND git rev-parse HEAD OUTPUT_VARIABLE GIT_REVISION OUTPUT_STRIP_TRAILING_WHITESPACE)
	message("Release version: ${GIT_REVISION}")
	file(WRITE ${CMAKE_SOURCE_DIR}/libnu/version.h "#define NU_VERSION \"${GIT_REVISION}\"\n")
	file(WRITE ${CMAKE_SOURCE_DIR}/sqlite3/version.h "#define NU_SQLITE3_EXT_VERSION \"${GIT_REVISION}\"\n")
endif(CMAKE_BUILD_TYPE MATCHES RELEASE)
