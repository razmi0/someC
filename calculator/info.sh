#!/bin/bash

# Loop through all files in the current directory
for file in *; do
    # Check if it's a regular file (not a directory or other type)
    if [[ -f "$file" ]]; then
        # Print the file name and its size in bytes
        size=$(ls -l "$file" | awk '{print $5}')
        echo "$file: $size"
    fi
done

# benchmark

hyperfine ./main