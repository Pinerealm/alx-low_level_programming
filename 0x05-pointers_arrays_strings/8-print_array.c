#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to an array of integers
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int idx = 0;

	while (idx < n)
	{
		printf("%d", a[idx]);
		if (idx < n - 1)
			printf(", ");
		idx++;
	}
	printf("\n");
}
