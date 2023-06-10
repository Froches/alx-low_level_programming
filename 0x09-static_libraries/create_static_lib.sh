#!/bin/bash

# Get a list of all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [[ -z "$c_files" ]]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile each .c file into object files
object_files=""
for file in $c_files; do
    object_file="${file%.c}.o"
    gcc -c $file -o $object_file
    object_files="$object_files $object_file"
done

# Create the static library
ar rcs liball.a $object_files

# Clean up the object files
rm $object_files

echo "Static library liball.a created successfully."
