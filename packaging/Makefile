GIT_REVISION=$$(expr substr $$(git rev-parse HEAD) 1 8)
VERSION="1.1-1:$(GIT_REVISION)"
WIN32_BUILD="build_mingw32"
WIN32_TOOLCHAIN="../cmake/Toolchain-Mingw32.cmake"
WIN32_ZIP="libnu-$(VERSION)-win32.zip"
WIN32_SQLITE_ZIP="libnusqlite3-$(VERSION)-win32.zip"

default: all
all: clean version win32_zip

version:
	echo "#define NU_VERSION \"$(VERSION)\"" >../libnu/version.h
	echo "#define NU_SQLITE3_EXT_VERSION \"$(VERSION)\"" >../sqlite3/version.h

win32_zip:
	mkdir -p $(WIN32_BUILD)
	(cd $(WIN32_BUILD) && cmake ../.. -DCMAKE_TOOLCHAIN_FILE=../$(WIN32_TOOLCHAIN))
	(cd $(WIN32_BUILD) && make nu nusqlite3)
	zip -j $(WIN32_ZIP) $(WIN32_BUILD)/libnu/libnu.a
	zip -j $(WIN32_SQLITE_ZIP) $(WIN32_BUILD)/sqlite3/libnusqlite3.dll $(WIN32_BUILD)/sqlite3/libnusqlite3.dll.a

clean:
	rm -fr $(WIN32_BUILD) $(WIN32_ZIP) $(WIN32_SQLITE_ZIP)
