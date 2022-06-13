#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer variable 1
 * @b: pointer variable 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
