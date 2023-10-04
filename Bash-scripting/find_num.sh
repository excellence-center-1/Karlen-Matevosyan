#!/bin/bash

# generate a random number between 1 and 100
target=$((RANDOM % 100 + 1))

echo "Guess a number between 1 and 100: "

# loop until the user guesses the correct number
while true; do
    read guess

    # check if the guess is equal to target
    if [ $guess -eq $target ]; then
        echo "Congratulations, you guessed the number $target! "
        break        
    fi

    # check if the guess is less than the target
    if [ $guess -lt $target ]; then
        echo "The number is greater than $guess. Guess again: "
    fi

    # check if the guess is greater than the target
    if [ $guess -gt $target ]; then
        echo "The number is less than $guess. Guess again: "
    fi
done
