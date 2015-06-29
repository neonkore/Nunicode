default: all
all: clean testbuilds testcmake

testcmake:
	# This script tests the CMake build by:
	# - builds the main CMakeLists.txt
	# - builds the samples again in a separate build tree so
	#   the config-module will also be tested
	cmake -H.. -Bbuild/nunicode -DCMAKE_INSTALL_PREFIX=${PWD}/usr -DCMAKE_BUILD_TYPE=Debug
	cmake --build build/nunicode --target install --config Debug --clean-first
	cmake -H.. -Bbuild/nunicode -DCMAKE_INSTALL_PREFIX=${PWD}/usr -DCMAKE_BUILD_TYPE=Release
	cmake --build build/nunicode --target install --config Release --clean-first
	cmake -H../samples -Bbuild/samples -DCMAKE_PREFIX_PATH=${PWD}/usr -DCMAKE_BUILD_TYPE=Debug
	cmake --build build/samples --config Debug --clean-first
	cmake -H../samples -Bbuild/samples -DCMAKE_PREFIX_PATH=${PWD}/usr -DCMAKE_BUILD_TYPE=Release
	cmake --build build/samples --config Release --clean-first

testbuilds:
	# this script tests all nunicode build configurations
	cmake -H.. -Bbuild/default -DNU_BUILD_TESTS=1 -DNU_BUILD_SAMPLES=1 -DNU_BUILD_TESTS=1
	cmake --build build/default
	cmake -H.. -Bbuild/debug -DCMAKE_BUILD_TYPE=Debug -DNU_BUILD_SAMPLES=1 -DNU_BUILD_TESTS=1
	cmake --build build/debug --config Debug
	cmake -H.. -Bbuild/release -DCMAKE_BUILD_TYPE=Release -DNU_BUILD_SAMPLES=1
	cmake --build build/release --config Release
	cmake -H.. -Bbuild/_RELEASE -DCMAKE_BUILD_TYPE=RELEASE -DNU_BUILD_SAMPLES=1
	cmake --build build/_RELEASE --config RELEASE
	cmake -H.. -Bbuild/gcov -DCMAKE_BUILD_TYPE=GCOV
	cmake --build build/gcov --config GCOV
	cmake -H.. -Bbuild/prof -DCMAKE_BUILD_TYPE=PROF
	cmake --build build/prof --config PROF

clean:
	rm -fr "build"
	rm -fr "usr"
