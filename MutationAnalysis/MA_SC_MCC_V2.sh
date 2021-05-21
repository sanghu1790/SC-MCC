echo monika
#!/bin/ksh
export BENCHMARK=$1
export MODE=$2
mkdir $MODE
cd $MODE
cp ../$BENCHMARK.c $BENCHMARK.c
#Need to add command for test case generator 
python ../mutator.py ../$BENCHMARK.c $BENCHMARK-Mutants
gcc -fprofile-arcs -ftest-coverage -g ${BENCHMARK}.c

for q in `ls -v ../../SequenceGenerator/$BENCHMARK-$MODE-TestCases/*`;
do
./a.out < $q
done
gcov -abcfu ${BENCHMARK}.c > Cov_report-${BENCHMARK}.txt
#./mutator.sh $BENCHMARK
rm a.out

#The below code is to run tests on Original Program
#gcc ../${BENCHMARK}.c
./../deadmutants.sh $BENCHMARK
mkdir ${BENCHMARK}-Original
pwd
let a=1
for b in `ls -v ../../SequenceGenerator/$BENCHMARK-$MODE-TestCases/T*.txt`; 
do 
./a.out < ${b} > op-${a}.txt
mv op-${a}.txt ${BENCHMARK}-Original
((a =a+1));
done
rm a.out
echo "THIS"
ls
#The below code is to run tests on all mutants
let c=1
let t=0
let k=0
ls
for y in `ls -v ${BENCHMARK}-ReachedMutants/*.c`;
do
gcc ${y}
if [ $? == 0 ]
then
echo "${y}: MUTANT IS COMPILABLE \n" >> Mutant-compilable-check.txt
else
echo "${y}: MUTANT IS NOT-COMPILABLE \n" >> Mutant-compilable-check.txt
fi
mkdir ${BENCHMARK}-OP-${c}
((t =t+1));
let r=1
for z in `ls -v ../../SequenceGenerator/$BENCHMARK-$MODE-TestCases/T*.txt`; 
do 
./a.out < ${z} > op-${r}.txt
mv op-${r}.txt ${BENCHMARK}-OP-${c}
diff ${BENCHMARK}-Original/op-${r}.txt ${BENCHMARK}-OP-${t}/op-${r}.txt
if [ $? == 0 ]
then
echo "Mutant Alive"
else
echo "Mutant Killed"
echo $y "killed due to" $z >> killed-Mutants-report.txt
((k =k+1));
break;
fi
((r =r+1));
done
rm a.out
rm -r ${BENCHMARK}-OP-${t}
((c =c+1));
done
rm -r ${BENCHMARK}-Original
((a = ${t} - ${k} ))
((mscore = (${k} * 100) / ${t}))
echo "============Mutation Score Report============"
echo "============Mutation Score Report============" >> $BENCHMARK-report.txt
echo "Total number of Alive Mutants =: ${a}"
echo "Total number of Alive Mutants =: ${a}" >> $BENCHMARK-report.txt 
echo "Total number of Killed Mutants =: ${k}"
echo "Total number of Killed Mutants =: ${k}" >> $BENCHMARK-report.txt 
echo "Total number of Mutants =: ${t}"
echo "Total number of Mutants =: ${t}" >> $BENCHMARK-report.txt 
echo "Mutation Score =: ${mscore}%"
echo "Mutation Score =: ${mscore}%" >> $BENCHMARK-report.txt 
echo "============Report-Finish===================="
echo "============Report-Finish====================" >> $BENCHMARK-report.txt

mkdir $BENCHMARK-RESULTS
mv Mutant-compilable-check.txt $BENCHMARK-RESULTS
mv killed-Mutants-report.txt $BENCHMARK-RESULTS
mv $BENCHMARK-report.txt $BENCHMARK-RESULTS
mv $BENCHMARK-ReachedMutants $BENCHMARK-RESULTS
mv $BENCHMARK-Mutants $BENCHMARK-RESULTS

mkdir $BENCHMARK-RESULTS/src
mv $BENCHMARK.* $BENCHMARK-RESULTS/src/
mv $BENCHMARK-* $BENCHMARK-RESULTS/src/
mv Cov_report-${BENCHMARK}.txt $BENCHMARK-RESULTS/

