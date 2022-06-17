#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @a: pointer to an array of integers
 * @n: length of array
 *
 * Return: voide
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = (n - 1); i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
