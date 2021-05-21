#Written by Sangharatna Godboley
#This shell script compiles and run "MCDC_Sequence_Generator.java", "Seq_For_Pred.java", and "SequenceFileGenerator.java" for a C program. "MCDC_Sequence_Generator.java" takes a C program and identifies atomic conditions and predicates and produces "Seq_For_Pred.java" which consists of all predicates with temporary variables such as A, B, and C for each conditions etc. Then, "Seq_For_Pred.java" produces all tables and finally MC/DC sequences for all predicates. To write truth values in terms of "1" for true, "0" for false, and "9" for don't care (x), we run "SequenceFileGenerator.java". This "SequenceFileGenerator.java" will also includes the truth values of each atomic conditions as well as all truth values of predicates. Finally, we get the total possible sequence (feasible and in feasible) according to MC/DC criterion, now we can supply them into "condition marker algorithm".
Dres1=$(date +%s.%N)
let dtD=0
export BENCHMARK=$1
export VERSION=$2
cd exp
mkdir seq
cd ..
javac MCDC_Sequence_Generator_multiple.java
java MCDC_Sequence_Generator_multiple "$1"
i=1;
for file in Seq_For_Pred******.java; do 
javac Seq_For_Pred$i.java;
java Seq_For_Pred$i;
echo $i
i=$((i+1));
done
javac SequenceFileGenerator.java
java SequenceFileGenerator 
mkdir "$1-seq" 2> err.txt
for y1 in `ls -v $1-seq/seq/Sequence-atom-*-*.txt`;   
do 
     echo $y1 >> $1-seq/seq/ALL-SEQUENCES-$BENCHMARK.txt
     cat $y1 >> $1-seq/seq/ALL-SEQUENCES-$BENCHMARK.txt
     echo '()' >> $1-seq/seq/ALL-SEQUENCES-$BENCHMARK.txt
done
for y in `ls -v $1-seq/seq/Sequence-pred-*-*.txt`;   
do 
     echo $y >> $1-seq/seq/ALL-SEQUENCES-$BENCHMARK.txt
     cat  $y >> $1-seq/seq/ALL-SEQUENCES-$BENCHMARK.txt
     echo '()' >> $1-seq/seq/ALL-SEQUENCES-$BENCHMARK.txt
done
rm Seq_For_Pred*
rm err.txt
mkdir "exp/meta" 2> err.txt
javac MetaJavaFileGenerator_V1and2.java
java MetaJavaFileGenerator_V1and2 "$1"
javac MetaJavaFileGenerator_V3.java
java MetaJavaFileGenerator_V3 "$1"
javac MetaJavaFileGenerator_V4.java
java MetaJavaFileGenerator_V4 "$1"


/home/monika/CBMC/cbmc exp/meta/MetaWithBraces-$VERSION.c --trace --unwind 7 > $1-result-SC-MCC.txt
#./line-extractor.sh $1 MetaWithBraces-V1.c LoopAssertStatements.csv
sed '0,/** Results:/d' $BENCHMARK-result-SC-MCC.txt > $BENCHMARK-temp1.txt
sed '/Trace/,$d' $BENCHMARK-temp1.txt > $BENCHMARK-temp2.txt
sed '/ASSERTION VIOLATION: FAILURE/!d' $BENCHMARK-temp2.txt > $BENCHMARK-temp3.txt
sed 's/^.*\(line \)/\1/' $BENCHMARK-temp3.txt > $BENCHMARK-temp4.txt
sed -n 's/^[^0-9]*\([0-9]\{1,\}\).*$/\1/p' $BENCHMARK-temp4.txt > exp/meta/$BENCHMARK-Violated-Lines.txt
detectederrors=$(wc -l < exp/meta/$BENCHMARK-Violated-Lines.txt)

echo "******Total Violated Lines from CBMC******" > ../$BENCHMARK-MODE2-ASSERT-REPORT.txt
echo "Total number Detected Errors (not unique)=: $detectederrors" >> ../$BENCHMARK-MODE2-ASSERT-REPORT.txt

sed '/__CPROVER_assert(/!d' exp/meta/MetaWithBraces-$VERSION.c > $BENCHMARK-temp6.txt
detectedAllAsserts=$(wc -l < $BENCHMARK-temp6.txt)
detectedDuplicates=$(wc -l < exp/meta/LoopAssertStatements.csv)
let totalAssertCount=detectedAllAsserts-detectedDuplicates
echo "Total number unique assert statements =: $totalAssertCount" >> ../$BENCHMARK-MODE2-ASSERT-REPORT.txt
detected=$(wc -l < $BENCHMARK-temp6.txt)
rm -r *-temp*.txt


javac DetectAssertions.java
java DetectAssertions $1

#total_varcount=$(grep -c '__CPROVER_output' $1)
#total_varcount=1
awk '/Trace/ || /OUTPUT/' $1-result-SC-MCC.txt > resultCheck.txt
mkdir $BENCHMARK-cil-Mode2-SC-MCC-TestCases
testcaseCount=0
while read -r line; do 
	
	if [ $(expr "$line" : "Trace.*$") -gt 0 ]; then ## begins with 'OUTPUT'
	testcaseCount=`expr $testcaseCount + 1`
	fi
	if [ $(expr "$line" : "OUTPUT.*$") -gt 0 ]; then
	line=$(echo "$line" | sed s/\([^][]*\)//) 
	line=$(echo "$line" | sed 's/^[^:]*://g')
        echo "$line" | sed s/OUTPUT// | xargs >> "$BENCHMARK-cil-Mode2-SC-MCC-TestCases/T$testcaseCount.txt"
	fi
	
	
done < resultCheck.txt
#./duplicate_rem.sh $BENCHMARK
mv $1-result-SC-MCC.txt exp/meta/$1-result-SC-MCC.txt
mv resultCheck.txt exp/meta/resultCheck.txt
rm exp/meta/MetaWithBracesWhile-V1.c
rm exp/meta/MetaWithBracesWhile-V3.c
mv exp/seq "$1-seq"/
mv exp/* "$1-seq"
rm err.txt
cd ../MutationAnalysis/
./MA_SC_MCC_V2.sh $BENCHMARK-cil Mode2-SC-MCC
Dres2=$(date +%s.%N)
dtD=$(echo "$Dres2 - $Dres1" | bc)
ddD=$(echo "$dtD/86400" | bc)
dtD2=$(echo "$dtD-86400*$ddD" | bc)
dhD=$(echo "$dtD2/3600" | bc)
dtD3=$(echo "$dtD2-3600*$dhD" | bc)
dmD=$(echo "$dtD3/60" | bc)
dsD=$(echo "$dtD3-60*$dmD" | bc)
echo "****************Time Analysis SC-MCC Mode2 Report - Start**************************" >> ../Time-$BENCHMARK-MODE2.txt
echo "***Total runtime in seconds" $dtD >> ../Time-$BENCHMARK-MODE2.txt
printf "Total runtime: %d:%02d:%02d:%02.4f\n" $ddD $dhD $dmD $dsD >> ../Time-$BENCHMARK-MODE2.txt
echo "****************Time Analysis SC-MCC Mode2 Report - End**************************" >> ../Time-$BENCHMARK-MODE2.txt


