echo sanghu
for fn in SLOT2/*-all/*.csv; 
do 
   cat "$fn" >> summary-SLOT2.csv
done
