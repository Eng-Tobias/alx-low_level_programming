#!/bin/bash
# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# Clean up by removing the .o files
rm *.o
