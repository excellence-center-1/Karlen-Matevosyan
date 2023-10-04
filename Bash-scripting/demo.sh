#!/bin/bash

read -p "Enter first number " num1
read -p "Enter second number " num2

result=$((num1+num2))
touch 1.txt

echo "num1 + num2 =  $result"  >> 1.txt
