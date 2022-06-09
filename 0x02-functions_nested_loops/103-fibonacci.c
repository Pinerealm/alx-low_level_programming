#include <stdio.h>

/**
 * main - prints the sum of even Fibonacci numbers less than 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;
	int j = 2;
	int sum = 0;
	int next = 0;

	while (next < 4000000)
	{
		next = i + j;
		if (next % 2 == 0)
		{
			sum += next;
		}
		i = j;
		j = next;
	}
	printf("%d\n", sum);

	return (0);
}
