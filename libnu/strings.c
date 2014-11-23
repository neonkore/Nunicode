#include <assert.h>

#include "defines.h"
#include "strings.h"

#if defined (NU_WITH_Z_STRINGS) || defined(NU_WITH_N_STRINGS)

static ssize_t _nu_strlen(const char *encoded, const char *limit, nu_read_iterator_t it) {
	ssize_t len = 0;

	const char *p = encoded;
	while (p < limit) {
		uint32_t u = 0;
		p = it(p, &u);

		if (u == 0) {
			break;
		}

		++len;
	}

	return len;
}

static ssize_t _nu_bytelen(const uint32_t *unicode, const uint32_t *limit, nu_write_iterator_t it) {
	ssize_t len = 0;

	const uint32_t *p = unicode;
	while (p < limit) {
		if (*p == 0) {
			break;
		}

		/* nu_write_iterator_t will return offset relative to 0
		 * which is effectively bytes length of codepoint */
		size_t byte_len = (size_t)it(*p, 0);
		len += byte_len;

		++p;
	}

	return len;
}

static ssize_t _nu_strbytelen(const char *encoded, const char *limit, nu_read_iterator_t it) {
	uint32_t u = 0;
	const char *p = encoded;

	while (p < limit) {
		const char *np = it(p, &u);

		if (u == 0) {
			return (p - encoded);
		}

		p = np;
	}

	return 0;
}

static ssize_t _nu_sprint(const char *source, const char *limit, nu_read_iterator_t read_it,
	char *dest, size_t size, nu_write_iterator_t write_it,
	nu_transformation_t transform, nu_read_iterator_t transform_read) {

	const char *p = source;
	char *d = dest;

	ssize_t done = 0;

	while (p < limit) {
		uint32_t u = 0;

		p = read_it(p, &u);

		const char *mapping = 0;

		if (transform != 0) {
			assert(transform_read != 0); /* transform_read is mandatory if transform != 0 */
			mapping = transform(u);
		}

		if (mapping != 0) {
			uint32_t nu = 0;

			do {
				mapping = transform_read(mapping, &nu);
				if (nu == 0) {
					break;
				}

				size_t len = (size_t)write_it(nu, 0);

				if (done + len <= size) {
					d = write_it(nu, d);
				}

				done += len;
			}
			while (nu != 0);
		}
		else {
			size_t len = (size_t)write_it(u, 0);

			if (done + len <= size) {
				d = write_it(u, d);
			}

			if (u != 0) {
				done += len;
			}
		}

		if (u == 0) {
			break;
		}
	}

	/* append length of terminating 0 */
	done += (size_t)write_it(0, 0);

	return done;
}

#endif /* NU_WITH_N_STRINGS || NU_WITH_Z_STRINGS */

#ifdef NU_WITH_Z_STRINGS

ssize_t nu_strlen(const char *encoded, nu_read_iterator_t it) {
	return _nu_strlen(encoded, NU_UNLIMITED, it);
}

ssize_t nu_bytelen(const uint32_t *unicode, nu_write_iterator_t it) {
	return _nu_bytelen(unicode, NU_UNLIMITED, it);
}

ssize_t nu_strbytelen(const char *encoded, nu_read_iterator_t it) {
	return _nu_strbytelen(encoded, NU_UNLIMITED, it);
}

ssize_t nu_sprint(const char *encoded, nu_read_iterator_t read_it,
	char *dest, size_t size, nu_write_iterator_t write_it,
	nu_transformation_t transform, nu_read_iterator_t transform_read) {
	return _nu_sprint(encoded, NU_UNLIMITED, read_it,
		dest, size, write_it, transform, transform_read);
}

#endif /* NU_WITH_Z_STRINGS */

#ifdef NU_WITH_N_STRINGS

ssize_t nu_strnlen(const char *encoded, size_t max_len, nu_read_iterator_t it) {
	return _nu_strlen(encoded, encoded + max_len, it);
}

ssize_t nu_bytenlen(const uint32_t *unicode, size_t max_len, nu_write_iterator_t it) {
	return _nu_bytelen(unicode, unicode + max_len, it);
}

#endif /* NU_WITH_N_STRINGS */
