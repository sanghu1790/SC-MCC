
export BENCHMARK=$1
export VERSION=$2
export BOUND=$3


./cbmc MetaWithBraces-V$VERSION.c --trace --unwind $BOUND > $BENCHMARK-result-SC-MCC.txt

sed '0,/** Results:/d' $BENCHMARK-result-SC-MCC.txt > $BENCHMARK-temp1.txt
sed '/Trace/,$d' $BENCHMARK-temp1.txt > $BENCHMARK-temp2.txt
sed '/ASSERTION VIOLATION: FAILURE/!d' $BENCHMARK-temp2.txt > $BENCHMARK-temp3.txt
sed 's/^.*\(line \)/\1/' $BENCHMARK-temp3.txt > $BENCHMARK-temp4.txt
sed -n 's/^[^0-9]*\([0-9]\{1,\}\).*$/\1/p' $BENCHMARK-temp4.txt > $BENCHMARK-Violated-Lines.txt
detectederrors=$(wc -l < $BENCHMARK-Violated-Lines.txt)
echo "******Total Violated Lines from CBMC******" > $BENCHMARK-MODE2-ASSERT-REPORT.txt
echo "Total number Detected Errors (not unique)=: $detectederrors" >> $BENCHMARK-MODE2-ASSERT-REPORT.txt
sed '/__CPROVER_assert(/!d' MetaWithBraces-V$VERSION.c > $BENCHMARK-temp6.txt
detectedAllAsserts=$(wc -l < $BENCHMARK-temp6.txt)
detectedDuplicates=$(wc -l < ../SequenceGenerator/exp/meta/LoopAssertStatements.csv)
let totalAssertCount=detectedAllAsserts-detectedDuplicates
echo "Total number unique assert statements =: $totalAssertCount" >> $BENCHMARK-MODE2-ASSERT-REPORT.txt
rm -r *-temp*.txt



