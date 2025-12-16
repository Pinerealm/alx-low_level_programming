#!/bin/bash
gcc -shared -o /tmp/libwin.so -fPIC -xc - <<< "$(printf "int rand(){static int i=0\073int n[]={8,8,7,9,23,74}\073return n[i++%%6]\073}void srand(unsigned int s){}")"
export LD_PRELOAD=/tmp/libwin.so
