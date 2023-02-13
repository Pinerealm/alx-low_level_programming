#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers starting with 1
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long i = 1;
	long j = 2;
	long sum, n;

	printf("%lu, ", i);
	printf("%lu, ", j);

	for (n = 0; n < 48; n++)
	{
		sum = i + j;
		if (n == 47)
			printf("%lu", sum);
		else
			printf("%lu, ", sum);
		i = j;
		j = sum;
	}
	printf("\n");

	return (0);
}
