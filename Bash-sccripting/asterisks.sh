#!/bin/bash

read -p "Enter Number: " num

for ((i=1;i<=num;i++)); do
  for ((j=1;j<=i;j++)); do
    echo -n "*"
  done
  echo
done

