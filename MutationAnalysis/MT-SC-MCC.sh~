#!/bin/ksh
export BENCHMARK=$1
#Need to add command for test case generator 
python mutator.py $BENCHMARK.c $BENCHMARK-Mutants
./mutator.sh $BENCHMARK
mkdir $BENCHMARK-RESULTS
mv Mutant-compilable-check.txt $BENCHMARK-RESULTS
mv killed-Mutants-report.txt $BENCHMARK-RESULTS
mv $BENCHMARK-report.txt $BENCHMARK-RESULTS
mv $BENCHMARK-Mutants $BENCHMARK-RESULTS

