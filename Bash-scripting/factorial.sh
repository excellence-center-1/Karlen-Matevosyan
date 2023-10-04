#!/bin/bash
#Recursive factorial function

function factorial {
    local arg=$1

        if [[ $1 -eq 0 ]] || [[ $1 -eq 1 ]]; then
            echo 1
        else
            fact=$(factorial $(( $1 - 1)) )
                echo $(( $1 * $fact ))
                fi
}

    read -p "Enter the number: " num
echo $(factorial $num)
