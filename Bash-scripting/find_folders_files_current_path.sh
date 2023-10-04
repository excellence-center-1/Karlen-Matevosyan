#!/bin/bash

# Count the number of files and folders in the current directory
num_files=$(find . -maxdepth 1 -type f | wc -l)
num_dirs=$(find . -maxdepth 1 -type d | wc -l)

echo "Number of files: $num_files"
echo "Number of directories: $num_dirs"

