while read n; do
       echo $n
done < numbers.txt2

echo 

for x in 100 345 55 6; do 
        echo $x
 done
 
 echo
 
 for x in $(cat numbers.txt2); do 
        echo $x
 done
 
        

