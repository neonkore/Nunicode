#include <stdio.h>
#include <sqlite3.h>

static const char *SHARED = "./libnusqlite3.so";
static const char *ENTRY = "sqlite3_nunicode_init";

int callback(void *context, int argc, char **argv, char **columns) {
	(void)(context);
	(void)(argc);
	(void)(columns);

	printf("<<< collation result: %s\n", argv[0]);
	return SQLITE_OK;
}

int main() {
	sqlite3 *db = 0;
	sqlite3_open(":memory:", &db);

	int rc = SQLITE_OK;

	/* extension loading is disabled by default,
	 * this call re-enables it */
	sqlite3_enable_load_extension(db, 1);

	char *errstr = 0;

	/* load extension */
	rc = sqlite3_load_extension(db, SHARED, ENTRY, &errstr);
	if (rc != SQLITE_OK) {
		printf("!!! error loading extension: %s\n", errstr);
		return 1;
	}

	const char *query = "SELECT 'Masse' LIKE 'Maße'";

	printf(">>> query: %s\n", query);

	rc = sqlite3_exec(db, query, callback, 0, &errstr);
	if (rc != SQLITE_OK) {
		printf("!!! error executing query: %s\n", errstr);
		return 1;
	}

	sqlite3_close(db);

	return 0;
}
