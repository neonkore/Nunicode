#!/bin/sh

# This script tests the CMake build by:
# - builds the main CMakeLists.txt
# - builds the unit test again in a separate build tree so
#   the config-module will also be tested

set -ex

cmake -H. -Bout/build/nunicode -DCMAKE_INSTALL_PREFIX=${PWD}/out -DCMAKE_BUILD_TYPE=Debug
cmake --build out/build/nunicode --target install --config Debug
cmake out/build/nunicode -DCMAKE_BUILD_TYPE=Release
cmake --build out/build/nunicode --target install --config Release --clean-first

cmake -Htests -Bout/build/tests -DCMAKE_INSTALL_PREFIX=${PWD}/out -DCMAKE_PREFIX_PATH=${PWD}/out -DCMAKE_BUILD_TYPE=Debug
cmake --build out/build/tests --target install --config Debug

out/bin/units
