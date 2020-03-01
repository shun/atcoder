#!/bin/bash
set -e

clang++ -std=c++14 -O3 -o $1.out $1

IN=""
expect=""
cat - | while read line
do
    if [ "${line:0:1}" = "#" ]; then
        expect="${line:1}"
        continue
    fi

    if [ ${#line} -eq 0 ]; then
        ret=`echo -e $IN | ./$1.out`
        if [ "$expect" == "" ]; then
            echo "### [??] result: $ret"
        else
            if [ "$ret" = "$expect" ]; then
                echo "### [OK] expect: $expect, result: $ret"
            else
                echo "!!! [NG] expect: $expect, result: $ret"
            fi
        fi

        echo ""
        IN=""
        expect=""
    else
        IN="$IN\n$line"
    fi
done

if [ ! ${#line} -eq 0 ]; then
    echo -e $IN | ./$1.out
    ret=`echo -e $IN | ./$1.out`
    echo "$ret"
fi
