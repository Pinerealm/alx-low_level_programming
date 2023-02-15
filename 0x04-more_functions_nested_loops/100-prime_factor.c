#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: finds and prints the largest prime factor of the number
 * 612852475143
 * Return: Always 0 (on success)
 */
int main(void)
{
	long n = 612852475143;
	long divisor = 2;

	while (divisor < n)
	{
		if (n % divisor == 0)
		{
			n = n / divisor;
			divisor = 2;
		}
		else
			divisor++;
	}
	printf("%ld\n", n);

	return (0);
}
