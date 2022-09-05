#!/bin/bash
gcc -fpic -c *.c
gcc -shared -fpic -o liball.so *.o
