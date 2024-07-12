#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library liball.a
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up: remove the .o files
rm *.o
