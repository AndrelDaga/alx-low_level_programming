#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c 
ar -rc liball.a *.o 
ranlib liball.a

echo "the create_static_lib.sh file creates a static library call liball" >> README.md
