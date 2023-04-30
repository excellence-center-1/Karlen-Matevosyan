#!/bin/bash

read -p "Enter first Number: " num1
read -p "Enter second Number: " num2

if [ $num1 -gt $num2 ];
then
    echo "$num1 is greater than $num2"
else
    echo "$num1 is less than $num2"
fi
