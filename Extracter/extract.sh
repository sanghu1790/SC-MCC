#!/bin/ksh
echo sanghu
BENCHMARK=$1

f1="$BENCHMARK-RESULTS/Mode1/$BENCHMARK-Mode1-Mutation/$BENCHMARK-report.txt"
Total1=$(grep "Total number of Mutants" $f1 | sed "s/[^0-9.]*//g")
#Dead1=$(grep "Dead Mutants" $f1 | sed "s/[^0-9.]*//g")
#Reached1=$(grep "Reached Mutants" $f1 | sed "s/[^0-9.]*//g")
Alive1=$(grep "Alive Mutants" $f1 | sed "s/[^0-9.]*//g")
Killed1=$(grep "Killed Mutants" $f1 | sed "s/[^0-9.]*//g")
Score1=$(grep "%" $f1 | sed "s/[^0-9*%.]*//g")


f2="$BENCHMARK-RESULTS/Mode2/$BENCHMARK-Mode2-Mutation/$BENCHMARK-report.txt"
Total2=$(grep "Total number of Mutants" $f2 | sed "s/[^0-9.]*//g")
#Dead2=$(grep "Dead Mutants" $f2 | sed "s/[^0-9.]*//g")
#Reached2=$(grep "Reached Mutants" $f2 | sed "s/[^0-9.]*//g")
Alive2=$(grep "Alive Mutants" $f2 | sed "s/[^0-9.]*//g")
Killed2=$(grep "Killed Mutants" $f2 | sed "s/[^0-9.]*//g")
Score2=$(grep "%" $f2 | sed "s/[^0-9*%.]*//g")

fo1="$BENCHMARK-RESULTS/Mode1/$BENCHMARK-Mode1-TC"
fo2="$BENCHMARK-RESULTS/Mode2/$BENCHMARK-Mode2-TC"
TC1=$(ls -v $fo1 | wc -l)
TC2=$(ls -v $fo2 | wc -l)


f3="$BENCHMARK-RESULTS/Mode1/$BENCHMARK-Mode1-Mutation/Cov_report-$BENCHMARK-Mode1.txt"
sed '0,/File/d' $f3 > tmp1.txt
LC1=$(grep "Lines executed" tmp1.txt | sed "s/[^0-9.]*//g")
BC1=$(grep "Branches executed" tmp1.txt | sed "s/[^0-9.]*//g")

f4="$BENCHMARK-RESULTS/Mode2/$BENCHMARK-Mode2-Mutation/Cov_report-$BENCHMARK-Mode2.txt"
sed '0,/File/d' $f4 > tmp2.txt
LC2=$(grep "Lines executed" tmp2.txt | sed "s/[^0-9.]*//g")
BC2=$(grep "Branches executed" tmp2.txt | sed "s/[^0-9.]*//g")


mcdctime=$(grep "Total runtime in seconds" $BENCHMARK-RESULTS/Mode1/Time-$BENCHMARK-MODE1.txt | sed "s/[^0-9.]*//g")
mode1mtime=$(grep "Total MA runtime in seconds" $BENCHMARK-RESULTS/Mode1/Time-$BENCHMARK-MODE1.txt | sed "s/[^0-9.]*//g")


mcctime=$(grep "Total SC-MCC runtime in seconds" $BENCHMARK-RESULTS/Mode2/Time-$BENCHMARK-MODE2.txt | sed "s/[^0-9.]*//g")
mode2mtime=$(grep "Total MA runtime in seconds" $BENCHMARK-RESULTS/Mode2/Time-$BENCHMARK-MODE2.txt | sed "s/[^0-9.]*//g")


printf "$BENCHMARK, $TC1, $LC1, $BC1, $Total1, $Alive1, $Killed1, $Score1" >> final-summary.csv
printf ", $TC2, $LC2, $BC2, $Total2, $Alive2, $Killed2, $Score2" >> final-summary.csv
printf ", $mcdctime, $mcctime, $mode1mtime, $mode2mtime, \n" >> final-summary.csv

rm tmp*.txt




