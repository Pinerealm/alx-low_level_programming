#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 *
 * @n: pointer to the number to check
 * @index: index of the bit to set
 *
 * Return: 1 if success, -1 if error
 */ 
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}
