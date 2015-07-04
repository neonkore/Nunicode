1. mkdir build && cd build
2. cmake .. -DCMAKE_BUILD_TYPE=Release && make nu

This will produce libnu.a for static linking.

3. make nusqlite3

This will produce SQLite3 extenstion (libnusqlite.so). If SQLite3
development package is not installed, this target is not available.



Other build options
-------------------

a) cmake .. -DNU_BUILD_TESTS=1

Will build test suite. Test won't compile in "Release" or
"PROF" configurations.

b) cmake .. -D_NU_BUILD_SAMPLES=1

Will build sample applications.
