#!/bin/bash
gcc -Wall -Wextra -Werror -pendatric -c *.c
ar rc liball.a *.o
