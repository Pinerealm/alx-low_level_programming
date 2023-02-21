#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array to reverse
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int idx = 0, tmp;

	while (idx < n / 2)
	{
		tmp = a[idx];
		a[idx] = a[n - idx - 1];
		a[n - idx - 1] = tmp;
		idx++;
	}
}
