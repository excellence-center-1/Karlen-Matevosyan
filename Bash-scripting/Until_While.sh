#!/bin/bash/

<< coment
#Sum of even number using While
sum=0

read -p "Enter The maximum number: " num

i=0
while [[ $i -le $num ]] 
do
    if (($i%2 == 0)); then
        sum=$((sum+i))
    fi
        i=$((i+1))
done
echo $sum

coment

<< OddUntill 
#Sum of Odd numbers using Untill

sum1=0

read -p "Enter The Maximum number: " num1

i=0
until [[ $i -gt $num1 ]]; do
    if [ $((i%2)) != 0 ]; then
        sum1=$((sum1+i))
    fi
        i=$((i+1))
done
echo $sum1
OddUntill
