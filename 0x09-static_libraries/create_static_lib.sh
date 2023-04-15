#!/bin/bash
gcc -c *.c
ar -rcs liball.a *.o
rm *.o
gcc -std=gnu89 main.c -L. -lall -o quoter
