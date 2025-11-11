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
		if (idx > 0)
			printf(", ");
		printf("%d", a[idx]);
		idx++;
	}
	printf("\n");
}
