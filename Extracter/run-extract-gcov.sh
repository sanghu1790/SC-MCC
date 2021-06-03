echo Sanghu
printf "Program,LC1,LC2,BC1,BC2, \n" >> final-summary-gcov.csv

./extract-gcov.sh PS-VAR-test21-B2
./extract-gcov.sh PS-VAR-test21-B3
./extract-gcov.sh PS-VAR-test21-B4
./extract-gcov.sh PS-VAR-test21-B5
./extract-gcov.sh PS-VAR-test22-B2
./extract-gcov.sh PS-VAR-test22-B3
./extract-gcov.sh PS-VAR-test22-B4
./extract-gcov.sh PS-VAR-test22-B5
./extract-gcov.sh PS-VAR-test23-B2
./extract-gcov.sh PS-VAR-test23-B3
#./extract-gcov.sh PS-VAR-test23-B4 # Rerun mode2
#./extract-gcov.sh PS-VAR-test23-B5 # Run

./extract-gcov.sh PS-VAR-test29-B2
./extract-gcov.sh PS-VAR-test29-B3
./extract-gcov.sh PS-VAR-test29-B4
./extract-gcov.sh PS-VAR-test29-B5

./extract-gcov.sh PS-VAR-test26-B2
./extract-gcov.sh PS-VAR-test26-B3
./extract-gcov.sh PS-VAR-test26-B4
./extract-gcov.sh PS-VAR-test26-B5


./extract-gcov.sh PS-VAR-test31-B2
./extract-gcov.sh PS-VAR-test31-B3
./extract-gcov.sh PS-VAR-test31-B4
./extract-gcov.sh PS-VAR-test31-B5

./extract-gcov.sh PS-VAR-test32-B2
./extract-gcov.sh PS-VAR-test32-B3
./extract-gcov.sh PS-VAR-test32-B4
./extract-gcov.sh PS-VAR-test32-B5

./extract-gcov.sh PS-VAR-test24-B2
./extract-gcov.sh PS-VAR-test24-B3
./extract-gcov.sh PS-VAR-test24-B4
./extract-gcov.sh PS-VAR-test24-B5

./extract-gcov.sh PS-VAR-test28-B2
./extract-gcov.sh PS-VAR-test28-B3
./extract-gcov.sh PS-VAR-test28-B4
./extract-gcov.sh PS-VAR-test28-B5

./extract-gcov.sh PS-VAR-test27-B2
./extract-gcov.sh PS-VAR-test27-B3
./extract-gcov.sh PS-VAR-test27-B4
./extract-gcov.sh PS-VAR-test27-B5

