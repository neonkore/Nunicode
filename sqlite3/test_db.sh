#!/bin/sh

# This script will produce database dump for basic performance tests
#

echo "CREATE TABLE test_casing (x);"
echo "BEGIN;"

for _ in $(seq 1 100000); do
	echo "INSERT INTO test_casing (x) VALUES ('Матрёшка');"
done

echo "END;"

echo "CREATE TABLE test_ordering (x);"
echo "BEGIN;"

for _ in $(seq 1 50000); do # insert in backward order
	echo "INSERT INTO test_ordering (x) VALUES ('я');"
	echo "INSERT INTO test_ordering (x) VALUES ('ё');"
done

echo "END;"

echo "SELECT 'test_casing: ' || count(*) || ' entries' FROM test_casing;"
echo "SELECT 'test_ordering: ' || count(*) || ' entries' FROM test_ordering;"
