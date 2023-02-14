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
	unsigned long billion = 1000000000;
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
	i1 = i % billion;
	j1 = j % billion;
	i = i / billion;
	j = j / billion;

	while (count < 96)
	{
		sum = i + j;
		extra = i1 + j1;
		if (extra > billion)
		{
			sum += extra / billion;
			extra = extra % billion;
		}
		if (count == 95)
			printf("%lu%lu", sum, extra);
		else
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
