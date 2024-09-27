#!/bin/bash

gcc -Wall -Werror -fPIC -c *.c
gcc -shared -o liball.so *.o
