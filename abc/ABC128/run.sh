#!/bin/bash
set -eu

clang++ -std=c++14 -stdlib=libc++ -O2 $1 -o $1.out

IN=""
cat - | while read line
do
    if [ ${#line} -eq 0 ]; then
        echo -e $IN | ./$1.out
        IN=""
        echo ""
    else
        IN="$IN\n$line"
    fi
done

