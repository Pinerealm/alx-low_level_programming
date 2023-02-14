#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2. Use of long long isn't allowed
 * Return: 0 (on success)
 */
int main(void)
{
	unsigned long i = 1, j = 2, i1, j1, sum, extra;
	short count = 0;

	printf("%lu, %lu, ", i, j);
	while (count < 90)
	{
		sum = i + j;
		printf("%lu, ", sum);
		i = j;
		j = sum;
		count++;
	}
	i1 = i % 1000000000;
	j1 = j % 1000000000;
	i = i / 1000000000;
	j = j / 1000000000;

	while (count < 96)
	{
		sum = i + j;
		extra = i1 + j1;
		printf("%lu%lu, ", sum, extra);
		i = j;
		i1 = j1;
		j = sum;
		j1 = extra;

		count++;
	}
	printf("\n");
	return (0);
}
