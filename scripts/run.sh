#!/usr/bin/env bash
set -e
cd "$(dirname "$1")"
g++ -std=c++17 -O2 -Wall -Wextra -Wshadow -fsanitize=undefined,address -o sol "$(basename "$1")"
for infile in in*.txt; do
  num="${infile#in}"
  num="${num%.txt}"
  outfile="out${num}.txt"
  if [ -f "$outfile" ]; then
    actual=$(./sol < "$infile")
    expected=$(cat "$outfile")
    if [ "$actual" == "$expected" ]; then
      echo "test $num: PASS"
    else
      echo "test $num: FAIL"
      echo "expected:"
      echo "$expected"
      echo "got:"
      echo "$actual"
    fi
  fi
done
rm -f sol
