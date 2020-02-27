1. mkdir build && cd build
2. cmake .. -DCMAKE_BUILD_TYPE=Release && make nu

This will produce libnu.a for static linking.

3. make nusqlite3

This will produce SQLite3 extenstion (libnusqlite.so). If SQLite3
development package is not installed, this target is not available.



Other build options
-------------------

a) cmake .. -DNU_BUILD_TESTS=ON

Will build test suite. Test won't compile in "Release" or
"PROF" configurations.

b) cmake .. -DNU_BUILD_SAMPLES=ON

Will build sample applications.



Tools
-----

To build tools used to generate various MPH tables (requires Go installed):

1. cd build
2. make tools

After that

3. make gen

Should regen all generated files.
