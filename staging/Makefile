default: all
all: clean testbuilds testcmake

testcmake:
	# This script tests the CMake build by:
	# - builds the main CMakeLists.txt
	# - builds the samples again in a separate build tree so
	#   the config-module will also be tested
	cmake -H.. -Bbuild/nunicode -DCMAKE_INSTALL_PREFIX=${PWD}/usr -DCMAKE_BUILD_TYPE=DEBUG
	cmake --build build/nunicode --target install --config DEBUG
	cmake -H.. -Bbuild/nunicode -DCMAKE_INSTALL_PREFIX=${PWD}/usr -DCMAKE_BUILD_TYPE=RELEASE
	cmake --build build/nunicode --target install --config RELEASE --clean-first
	cmake -H../samples -Bbuild/samples -DCMAKE_INSTALL_PREFIX=${PWD}/usr -DCMAKE_PREFIX_PATH=${PWD}/usr -DCMAKE_BUILD_TYPE=RELEASE
	cmake --build build/samples --config RELEASE	

testbuilds:
	cmake -H.. -Bbuild/debug -DCMAKE_BUILD_TYPE=DEBUG -DNU_BUILD_TESTS=1 -DNU_BUILD_SAMPLES=1
	cmake --build build/debug --config DEBUG
	cmake -H.. -Bbuild/release -DCMAKE_BUILD_TYPE=RELEASE -DNU_BUILD_SAMPLES=1
	cmake --build build/release --config RELEASE
	cmake -H.. -Bbuild/gcov -DCMAKE_BUILD_TYPE=GCOV
	cmake --build build/gcov --config GCOV
	cmake -H.. -Bbuild/prof -DCMAKE_BUILD_TYPE=PROF
	cmake --build build/prof --config PROF

clean:
	rm -fr "build"
	rm -fr "usr"
