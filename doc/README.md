Please refer to "Modules" section at the left for API Index.

* Project site: https://bitbucket.org/alekseyt/nunicode
* Git: https://alekseyt@bitbucket.org/alekseyt/nunicode.git

### Testing and coverage

    mkdir build && cd build
    cmake .. -DCMAKE_BUILD_TYPE=GCOV
    make coverage

* Test suite: tests/units
* Coverage report: tests/coverage/libnu/index.html


### Release build
   
    mkdir build && cd build
    cmake .. -DCMAKE_BUILD_TYPE=Release
    make
