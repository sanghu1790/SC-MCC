
export BENCHMARK=$1
export BOUND=$2



./cbmc --smt2 --beautify --refine-strings --cover mcdc $BENCHMARK.c --unwind $BOUND  > $BENCHMARK-mcdc-result.txt
# code to generate MCDC Assertion report
sed  '/independence condition/!d' $BENCHMARK-mcdc-result.txt > tempfile1.txt 
sed  "/decision\\/condition/!d" $BENCHMARK-mcdc-result.txt >> tempfile1.txt 
sed  '/Covered function/d' tempfile1.txt > tempfile2.txt 
total_varcount=$(grep -c 'MC/DC independence condition' tempfile2.txt)
total_varcount1=$(grep -c "decision\\/condition" tempfile2.txt)
total_varcount2=`expr $total_varcount + $total_varcount1`
echo "Total number of MC/DC independence conditions =: $total_varcount2" > $BENCHMARK-MODE1-ASSERT-REPORT.txt
succ_varcount=$(grep -c 'SATISFIED' tempfile2.txt)
echo "Total number of SATISFIED conditions =:$succ_varcount" >> $BENCHMARK-MODE1-ASSERT-REPORT.txt
rm tempfile*.txt

cp $BENCHMARK-mcdc-result.txt $BENCHMARK-mcdc-result-original.txt
sed -i '0,/Test suite:/d' $BENCHMARK-mcdc-result.txt 
sed -i '/^$/d'  $BENCHMARK-mcdc-result.txt 
cat $BENCHMARK-mcdc-result.txt > temp_testcases.txt
line=$(cat  temp_testcases.txt | head -n 1) 
count=${line//[^,]}
echo "${#count}"
sed -i '1d' temp_testcases.txt
sed -i -e $'s/,/\\\n/g' $BENCHMARK-mcdc-result.txt 
total_varcount=$((${#count} + 1))
counter=1
testcaseCount=1

mkdir $BENCHMARK-Mode1-TC
while read -r line; do 
	
	line=$(echo "$line" | sed 's/^[^=]*=//g')
        echo "$line" >> "$BENCHMARK-Mode1-TC/AT$testcaseCount.txt"
        if [ $(($counter % $total_varcount)) == 0 ]; then
		line=$(cat  temp_testcases.txt | head -n 1) 
		count=${line//[^,]}
		total_varcount=$((${#count} + 1))
		sed -i '1d' temp_testcases.txt
		counter=0
		echo "$counter"
		testcaseCount=`expr $testcaseCount + 1`
	fi
	counter=`expr $counter + 1`
	
done <  $BENCHMARK-mcdc-result.txt
rm temp_testcases.txt
mv $BENCHMARK-Mode1-TC ../

#--object-bits n              number of bits used for object addresses
# --dimacs                     generate CNF in DIMACS format
# --beautify                   beautify the counterexample (greedy heuristic)
# --localize-faults            localize faults (experimental)
# --smt2                       use default SMT2 solver (Z3)
# --boolector                  use Boolector
# --cprover-smt2               use CPROVER SMT2 solver
# --cvc4                       use CVC4
# --mathsat                    use MathSAT
# --yices                      use Yices
# --z3                         use Z3
# --refine                     use refinement procedure (experimental)
# --refine-strings             use string refinement (experimental)
# --string-printable           restrict to printable strings (experimental)
# --outfile filename           output formula to given file
# --arrays-uf-never            never turn arrays into uninterpreted functions
# --arrays-uf-always           always turn arrays into uninterpreted functions

