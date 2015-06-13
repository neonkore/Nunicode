#-*- coding: UTF-8

def coldata_strip(s):
	s = s.strip()
	return s


def coldata_split(s):
	s = coldata_strip(s)
	return filter(bool, map(str.strip, s.split(' ')))
