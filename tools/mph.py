#!/usr/bin/python
# Easy Perfect Minimal Hashing
#
# Based on:
# By Steve Hanov. Released to the public domain.
# http://stevehanov.ca/blog/index.php?id=119
#
# Based on:
# Edward A. Fox, Lenwood S. Heath, Qi Fan Chen and Amjad M. Daoud,
# "Practical minimal perfect hash functions for large databases",
# CACM, 35(1):105-121
#
# also a good reference:
# Compress, Hash, and Displace algorithm by Djamal Belazzougui,
# Fabiano C. Botelho, and Martin Dietzfelbinger

import sys
import time

PRIME = 0x01000193
INTERNAL_ENCODING = "UTF-8"


# Calculates a distinct hash function for a given string. Each value of the
# integer d results in a different hash value.
def hash(d, str):
	if d == 0:
		d = PRIME

	c = int(str, base=16)

	# It doesn't matter for MPH if it's FVN or not until G
	# is correctly filled, therefore simple XOR is enough to produce
	# required randomness while produced index fits into uint16_t.
	#
	# You can consider this as usage of Unicode codepoint as a hash
	# itself, but it need to depend on d to distibute values between
	# buckets

	return d ^ c


# Computes a minimal perfect hash table using the given python dictionary. It
# returns a tuple (G, V). G and V are both arrays. G contains the intermediate
# table of values needed to compute the index of the value in V. V contains the
# values of the dictionary.
def CreateMinimalPerfectHash(dict):
	size = len(dict)

	# Step 1: Place all of the keys into buckets
	buckets = [[] for i in range(size)]
	G = [0] * size
	values = [None] * size

	for key in dict.keys():
		buckets[hash(0, key) % size].append(key)

	# Step 2: Sort the buckets and process the ones with the most items first.
	buckets.sort(key=len, reverse=True)
	for b in xrange(size):
		bucket = buckets[b]
		if len(bucket) <= 1:
			break

		d = 1
		item = 0
		slots = []

		# Repeatedly try different values of d until we find a hash function
		# that places all items in the bucket into free slots
		while item < len(bucket):
			slot = hash(d, bucket[item]) % size
			if values[slot] is not None or slot in slots:
				d += 1
				item = 0
				slots = []
			else:
				slots.append(slot)
				item += 1

		G[hash(0, bucket[0]) % size] = d
		for i in range(len(bucket)):
			values[slots[i]] = dict[bucket[i]]

	# Only buckets with 1 item remain. Process them more quickly by directly
	# placing them into a free slot. Use a negative value of d to indicate
	# this.
	freelist = []
	for i in xrange(size):
		if values[i] is None:
			freelist.append(i)

	for b in xrange(b, size):
		bucket = buckets[b]

		if len(bucket) == 0:
			break

		slot = freelist.pop()
		# We subtract one to ensure it's negative even if the zeroeth slot was
		# used.
		G[hash(0, bucket[0]) % size] = -slot - 1
		values[slot] = dict[bucket[0]]

	return (G, values)


# Look up a value in the hash table, defined by G and V.
def PerfectHashLookup(G, key):
	d = G[hash(0, key) % len(G)]
	if d < 0:
		return -d - 1
	return hash(d, key) % len(G)


# Print human-readable info regarding this hash-table
def GenerateInfo(G, combined):
	print '''/*
%d
PRIME: %08X,
G_SIZE: %d,
COMBINED_LENGTH: %d,
ENCODING: %s,
*/
''' % (time.time(),
		PRIME, len(G),
		len(combined) / 4,
		INTERNAL_ENCODING)


VALUE_TEMPLATE = '''	{ 0x%(codepoint)05X, %(decomps)s },'''
VALUE_REF_TEMPLATE = '''&V%(codepoint)05X'''


# Filter out non-characters from private area
def Pass(c):
	assert(len(c) > 0)
	return (ord(c) < 0xE000 or ord(c) > 0xF8FF)


# Produce C-source-ready decomposition string
def FormatReplacement(r):
	chars = u''.join(
		filter(Pass, [unichr(int(x, base=16)) for x in r])).encode(INTERNAL_ENCODING)
	if len(chars) == 0:
		return
	formatted = '%s' % (''.join(('\\x%02X' % (ord(x)) for x in chars)))
	return formatted


# Print values table
def GenerateValues(G, V):
	BOUNDARY = 8

	print '/* codepoints */'
	print 'static const uint32_t VALUES_C[] = {'
	for i, (codepoint, replacement) in enumerate(V):
		assert(replacement is not None)

		if i % BOUNDARY == 0:
			sys.stdout.write('\t')
		sys.stdout.write('0x%06X, ' % (int(codepoint, base=16),))
		if (i + 1) % BOUNDARY == 0:
			sys.stdout.write('\n')

	print '};'
	print

	BOUNDARY = 10

	print '/* indexes */'
	print 'static const uint16_t VALUES_I[] = {'
	for i, (codepoint, replacement) in enumerate(V):
		assert(replacement is not None)

		if i % BOUNDARY == 0:
			sys.stdout.write('\t')
		sys.stdout.write('0x%04X, ' % (replacement,))
		if (i + 1) % BOUNDARY == 0:
			sys.stdout.write('\n')

	print '};'
	print


# Print first hash table
def GenerateG(G):
	BOUNDARY = 12

	print 'static const int16_t G[] = {'
	for i, x in enumerate(G):
		if i % BOUNDARY == 0:
			sys.stdout.write('\t')
		sys.stdout.write('%d' % (x,))
		sys.stdout.write(', ')
		if (i + 1) % BOUNDARY == 0:
			sys.stdout.write('\n')
	print '};'
	print


# Print combined encoded string
def GenerateCombined(combined):
	BOUNDARY = 12 * 4

	def chunks(combined, n):
		for i in xrange(0, len(combined), n):
			yield combined[i:i + n]

	print 'static const uint8_t COMBINED[] = {'
	for chunk in chunks(combined, BOUNDARY):
		parts = chunks(chunk, 4)
		# replace \xYY with 0xYY
		print '\t%s,' % (', '.join((p.replace('\\', '0') for p in parts)))
	print '};'
	print
