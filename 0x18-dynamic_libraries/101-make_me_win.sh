gcc -shared -o /tmp/libwin.so -fPIC -xc - <<< 'int rand(){static int i=0;int n[]={8,7,9,23,74,8};return n[i++%6];}void srand(unsigned int s){}'
export LD_PRELOAD=/tmp/libwin.so
