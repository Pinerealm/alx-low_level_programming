#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* FUNCTION PROTOTYPES */
unsigned int binary_to_uint(const char *);
void print_binary(unsigned long int);
int _putchar(char);
int get_bit(unsigned long int n, unsigned int index);

int set_bit(unsigned long int *n, unsigned int index);

#endif /* MAIN_H */
