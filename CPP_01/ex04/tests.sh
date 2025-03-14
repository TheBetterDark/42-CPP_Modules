# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tests.sh                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 14:25:29 by muabdi            #+#    #+#              #
#    Updated: 2025/03/14 16:22:47 by muabdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# Clear outp
clear

# Compile the main.cpp file
make re
if [ $? -ne 0 ]; then
    echo "Compilation failed"
    exit 1
fi

echo "\n"

# Create a temporary input file
input_file="test_input.txt"
echo "Hello World\nThis is a test file\nHello World" > $input_file

# Run the program with test inputs
./sed $input_file "Hello" "Hi"
if [ $? -ne 0 ]; then
    echo "Program execution failed"
    exit 1
fi

# Check if the output file is created
output_file="${input_file}.replace"
if [ ! -f $output_file ]; then
    echo "Output file not created"
    rm $input_file
    exit 1
fi

# Verify the contents of the output file
expected_output="expected_output.txt"
echo "Hi World\nThis is a test file\nHi World" > $expected_output

if ! diff -q $output_file $expected_output > /dev/null; then
    echo "\nOutput file contents do not match expected output\n"
    echo "Expected:"
    cat $expected_output
    echo "Got:"
    cat $output_file
    rm $input_file $output_file $expected_output sed
    exit 1
fi

echo "\n"
cat $expected_output
echo "\n"
cat $output_file

# Clean up
rm -rf $input_file $output_file $expected_output sed bin

echo "\nAll tests passed!\n"