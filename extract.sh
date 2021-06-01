export BENCHMARK=$1

awk '/Trace/ || /symb=/' $BENCHMARK-result-SC-MCC.txt > $BENCHMARK-resultCheck.txt
mkdir $BENCHMARK-Mode2-SC-MCC-TC
testcaseCount=0
while read -r line; do 
	if [ $(expr "$line" : "Trace.*$") -gt 0 ]; then ## begins with 'OUTPUT'
	testcaseCount=`expr $testcaseCount + 1`
	fi
	if [ $(expr "$line" : "symb=.*$") -gt 0 ]; then
	line=$(echo "$line" | sed s/\([^][]*\)//) 
	line=$(echo "$line" | sed 's/^[^:]*://g')
        echo "$line" | sed s/symb=// | xargs >> "$BENCHMARK-Mode2-SC-MCC-TC/T$testcaseCount.txt"
	fi
done < $BENCHMARK-resultCheck.txt

