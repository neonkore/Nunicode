#include <stdio.h>
#include <sqlite3.h>

#include "nusqlite3.h"

int callback(void *context, int argc, char **argv, char **columns) {
	(void)(context);
	(void)(argc);
	(void)(columns);

	printf("<<< collation result: %s\n", argv[0]);
	return SQLITE_OK;
}

int main() {
	nunicode_sqlite3_static_init(1);

	sqlite3 *db = 0;
	sqlite3_open(":memory:", &db);

	int rc = SQLITE_OK;

	const char *query = "SELECT 'Masse' LIKE 'Maße'";

	printf(">>> query: %s\n", query);

	char *errstr = 0;
	rc = sqlite3_exec(db, query, callback, 0, &errstr);
	if (rc != SQLITE_OK) {
		printf("!!! error executing query: %s\n", errstr);
		return 1;
	}

	sqlite3_close(db);

	return 0;
}
