#!/bin/ksh
echo sanghu
BENCHMARK=$1

f1="results-$BENCHMARK/Mode1/report-$BENCHMARK-mode1.txt"
sed '0,/File/d' $f1 > tmp1.txt
LC1=$(grep "Lines executed" tmp1.txt | sed "s/[^0-9.]*//g")
BC1=$(grep "Branches executed" tmp1.txt | sed "s/[^0-9.]*//g")

f2="results-$BENCHMARK/Mode2/report-$BENCHMARK-mode2.txt"
sed '0,/File/d' $f2 > tmp2.txt
LC2=$(grep "Lines executed" tmp2.txt | sed "s/[^0-9.]*//g")
BC2=$(grep "Branches executed" tmp2.txt | sed "s/[^0-9.]*//g")

printf "$BENCHMARK, $LC1, $BC1, $LC1, $BC1, \n" >> final-summary-gcov.csv
rm tmp*.txt
