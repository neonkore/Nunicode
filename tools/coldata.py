#-*- coding: UTF-8

from operator import itemgetter


def coldata_strip(s):
	s = s.strip()
	return s


def coldata_split(s):
	s = coldata_strip(s)
	return filter(bool, map(str.strip, s.split(' ')))


def collect_contractions(codepoints_file, contractions_file):
	'''collect codepoints and contractions from file (title is misleading
	in form of ([ "0001", "0002"], weight)'''
	codepoints = []
	contractions = []
	for line in open(codepoints_file, 'rt'):
		tokens = coldata_split(line)
		points, weight = points2points(tokens[:-1]), int(tokens[-1], base=16)
		codepoints.append((points, weight))

	for line in open(contractions_file, 'rt'):
		tokens = coldata_split(line)
		points, weight = points2points(tokens[:-1]), int(tokens[-1], base=16)
		contractions.append((points, weight))

	return sorted(codepoints, key=itemgetter(0)), sorted(contractions, key=itemgetter(0))


def points2points(points):
	'''0000 to 000000 i.e. any-byte codepoints to 6-byte codepoints
	this will make codepoints string representation usable w/o %06X formatting'''
	return ['%06X' % (int(point, base=16)) for point in points]
