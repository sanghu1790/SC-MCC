echo sanghu
#VERSION= V1 or V2 or V3 or V4
#BOUND= Provide the loop bound

export BENCHMARK=$1
export VERSION=$2
export BOUND=$3


cp Programs/CBMC/$BENCHMARK.c SequenceGenerator/
cp Programs/CBMC/$BENCHMARK.c CBMC/
cp Programs/GCOV/$BENCHMARK.c MutationAnalysis/

#This code below is for MCDC from CBMC coverage mode i.e. Mode 1
Dres1=$(date +%s.%N)
let dtD=0

cd CBMC
./mcdc-cbmc.sh $BENCHMARK $BOUND
cd ..

Dres2=$(date +%s.%N)
dtD=$(echo "$Dres2 - $Dres1" | bc)
ddD=$(echo "$dtD/86400" | bc)
dtD2=$(echo "$dtD-86400*$ddD" | bc)
dhD=$(echo "$dtD2/3600" | bc)
dtD3=$(echo "$dtD2-3600*$dhD" | bc)
dmD=$(echo "$dtD3/60" | bc)
dsD=$(echo "$dtD3-60*$dmD" | bc)
echo "****************Time Analysis MCDC Mode1 Report - Start**************************" >> Time-$BENCHMARK-MODE1.txt
echo "***Total runtime in seconds" $dtD >> Time-$BENCHMARK-MODE1.txt
printf "Total runtime: %d:%02d:%02d:%02.4f\n" $ddD $dhD $dmD $dsD >> Time-$BENCHMARK-MODE1.txt
echo "****************Time Analysis MCDC Mode1 Report - End**************************" >> Time-$BENCHMARK-MODE1.txt

Yres1=$(date +%s.%N)
let dtY=0

cd MutationAnalysis/
./MA_SC_MCC_V2.sh $BENCHMARK 1
cd ..

Yres2=$(date +%s.%N)
dtY=$(echo "$Yres2 - $Yres1" | bc)
ddY=$(echo "$dtY/86400" | bc)
dtY2=$(echo "$dtY-86400*$ddY" | bc)
dhY=$(echo "$dtY2/3600" | bc)
dtY3=$(echo "$dtY2-3600*$dhY" | bc)
dmY=$(echo "$dtY3/60" | bc)
dsY=$(echo "$dtY3-60*$dmY" | bc)
echo "****************Time Mutation Analysis Mode1 Report - Start**************************" >> Time-$BENCHMARK-MODE1.txt
echo "***Total MA runtime in seconds" $dtY >> Time-$BENCHMARK-MODE1.txt
printf "Total MA runtime: %d:%02d:%02d:%02.4f\n" $ddY $dhY $dmY $dsY >> Time-$BENCHMARK-MODE1.txt
echo "****************Time Mutation Analysis Mode1 Report - End**************************" >> Time-$BENCHMARK-MODE1.txt

mkdir $BENCHMARK-RESULTS
mkdir $BENCHMARK-RESULTS/Mode1
mkdir $BENCHMARK-RESULTS/Mode1/CBMC

mv CBMC/$BENCHMARK-MODE1-ASSERT-REPORT.txt $BENCHMARK-RESULTS/Mode1/CBMC
mv CBMC/$BENCHMARK-mcdc-result-original.txt $BENCHMARK-RESULTS/Mode1/CBMC
mv CBMC/$BENCHMARK-mcdc-result.txt $BENCHMARK-RESULTS/Mode1/CBMC
mv Time-$BENCHMARK-MODE1.txt $BENCHMARK-RESULTS/Mode1

mv $BENCHMARK-Mode1-TC $BENCHMARK-RESULTS/Mode1
mv MutationAnalysis/$BENCHMARK-Mode1-Mutation $BENCHMARK-RESULTS/Mode1/


cp Programs/CBMC/$BENCHMARK.c SequenceGenerator/
cp Programs/CBMC/$BENCHMARK.c CBMC/
cp Programs/GCOV/$BENCHMARK.c MutationAnalysis/

#This code below is for SC-MCC from CBMC Bug finding i.e. Mode 2

Ares1=$(date +%s.%N)
let dtA=0


cd SequenceGenerator
./seqshell.sh $BENCHMARK.c $VERSION 
mv exp/meta/MetaWithBraces-V$VERSION.c ../CBMC/
cd ..

cd CBMC
./scmcc-cbmc.sh $BENCHMARK $VERSION $BOUND
cd ..

#cd SequenceGenerator
#javac DetectAssertions.java
#java DetectAssertions $BENCHMARK
#cd ..


#rdfind -deleteduplicates true -makeresultsfile false $BENCHMARK-Mode2-TC

Ares2=$(date +%s.%N)
dtA=$(echo "$Ares2 - $Ares1" | bc)
ddA=$(echo "$dtA/86400" | bc)
dtA2=$(echo "$dtA-86400*$ddA" | bc)
dhA=$(echo "$dtA2/3600" | bc)
dtA3=$(echo "$dtA2-3600*$dhA" | bc)
dmA=$(echo "$dtA3/60" | bc)
dsA=$(echo "$dtA3-60*$dmA" | bc)
echo "****************Time Analysis SC-MCC Mode2 Report - Start**************************" >> Time-$BENCHMARK-MODE2.txt
echo "***Total SC-MCC runtime in seconds" $dtA >> Time-$BENCHMARK-MODE2.txt
printf "Total SC-MCC runtime: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA >> Time-$BENCHMARK-MODE2.txt
echo "****************Time Analysis SC-MCC Mode2 Report - End**************************" >> Time-$BENCHMARK-MODE2.txt

Xres1=$(date +%s.%N)
let dtX=0

cd MutationAnalysis
./MA_SC_MCC_V2.sh $BENCHMARK 2
cd ..

Xres2=$(date +%s.%N)
dtX=$(echo "$Xres2 - $Xres1" | bc)
ddX=$(echo "$dtX/86400" | bc)
dtX2=$(echo "$dtX-86400*$ddX" | bc)
dhX=$(echo "$dtX2/3600" | bc)
dtX3=$(echo "$dtX2-3600*$dhX" | bc)
dmX=$(echo "$dtX3/60" | bc)
dsX=$(echo "$dtX3-60*$dmX" | bc)
echo "****************Time Mutation Analysis Mode2 Report - Start**************************" >> Time-$BENCHMARK-MODE2.txt
echo "***Total MA runtime in seconds" $dtX >> Time-$BENCHMARK-MODE2.txt
printf "Total MA runtime: %d:%02d:%02d:%02.4f\n" $ddX $dhX $dmX $dsX >> Time-$BENCHMARK-MODE2.txt
echo "****************Time Mutation Analysis Mode2 Report - End**************************" >> Time-$BENCHMARK-MODE2.txt



mkdir $BENCHMARK-RESULTS/Mode2
mkdir $BENCHMARK-RESULTS/Mode2/PredicatesResults
mkdir $BENCHMARK-RESULTS/Mode2/CBMC
mv SequenceGenerator/exp/meta $BENCHMARK-RESULTS/Mode2/
mv SequenceGenerator/exp/* $BENCHMARK-RESULTS/Mode2/PredicatesResults
mv SequenceGenerator/$BENCHMARK.c $BENCHMARK-RESULTS/Mode2/PredicatesResults
rm SequenceGenerator/err.txt
mv CBMC/$BENCHMARK-result-SC-MCC-original.txt $BENCHMARK-RESULTS/Mode2/CBMC
mv CBMC/$BENCHMARK-result-SC-MCC.txt $BENCHMARK-RESULTS/Mode2/CBMC
mv CBMC/$BENCHMARK-Violated-Lines.txt $BENCHMARK-RESULTS/Mode2/CBMC
mv CBMC/$BENCHMARK-MODE2-ASSERT-REPORT.txt $BENCHMARK-RESULTS/Mode2/CBMC
mv CBMC/MetaWithBraces-V$VERSION.c $BENCHMARK-RESULTS/Mode2/CBMC
mv CBMC/$BENCHMARK.c $BENCHMARK-RESULTS/Mode2/CBMC
mv $BENCHMARK-resultCheck.txt $BENCHMARK-RESULTS/Mode2/CBMC
mv $BENCHMARK-Mode2-TC $BENCHMARK-RESULTS/Mode2
mv Time-$BENCHMARK-MODE2.txt $BENCHMARK-RESULTS/Mode2
mv MutationAnalysis/$BENCHMARK-Mode*-Mutation $BENCHMARK-RESULTS/Mode2/


cat $BENCHMARK-RESULTS/Mode1/$BENCHMARK-Mode1-Mutation/Cov_report-${BENCHMARK}-Mode1.txt
cat $BENCHMARK-RESULTS/Mode2/$BENCHMARK-Mode2-Mutation/Cov_report-${BENCHMARK}-Mode2.txt

cat $BENCHMARK-RESULTS/Mode1/$BENCHMARK-Mode1-Mutation/$BENCHMARK-report.txt 
cat $BENCHMARK-RESULTS/Mode2/$BENCHMARK-Mode2-Mutation/$BENCHMARK-report.txt
