#!/bin/bash
set -e

clang++ -std=c++14 -O3 -o $1.out $1

IN=""
cat - | while read line
do
    if [ ${#line} -eq 0 ]; then
        echo -e $IN | ./$1.out
        echo ""
        IN=""
    else
        IN="$IN\n$line"
    fi
done

if [ ! ${#line} -eq 0 ]; then
    echo -e $IN | ./$1.out
fi
