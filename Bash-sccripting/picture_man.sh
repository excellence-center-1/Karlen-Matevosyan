#!/bin/bash

# run the command and store the output in a variable
output=$(ls -l)

# display the output on the terminal
echo "$output"

# specify the path to the image file to open
image_path="Screenshot from 2023-01-26 22-46-43.png"

# open the image file with the default image viewer
xdg-open "$image_path"

