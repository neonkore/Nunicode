#!/bin/sh

# This script tests the CMake build by:
# - builds the main CMakeLists.txt
# - builds the samples again in a separate build tree so
#   the config-module will also be tested

set -ex

cmake -H.. -Bbuild/nunicode -DCMAKE_INSTALL_PREFIX=${PWD}/usr -DCMAKE_BUILD_TYPE=DEBUG
cmake --build build/nunicode --target install --config DEBUG
cmake -H.. -Bbuild/nunicode -DCMAKE_INSTALL_PREFIX=${PWD}/usr -DCMAKE_BUILD_TYPE=RELEASE
cmake --build build/nunicode --target install --config RELEASE --clean-first

cmake -H../samples -Bbuild/samples -DCMAKE_INSTALL_PREFIX=${PWD}/usr -DCMAKE_PREFIX_PATH=${PWD}/usr -DCMAKE_BUILD_TYPE=RELEASE
cmake --build build/samples --config RELEASE
