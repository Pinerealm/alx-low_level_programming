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
	unsigned long fib1_low = 1, fib2_low = 2;
	unsigned long fib1_high = 0, fib2_high = 0;
	unsigned long sum_low, sum_high, carry;
	unsigned long divisor = 1000000000; /* 10^9 */
	int count;

	printf("%lu, %lu", fib1_low, fib2_low);

	for (count = 2; count < 98; count++)
	{
		sum_low = fib1_low + fib2_low;
		carry = sum_low / divisor;
		sum_low = sum_low % divisor;

		sum_high = fib1_high + fib2_high + carry;

		if (sum_high > 0)
			printf(", %lu%09lu", sum_high, sum_low);
		else
			printf(", %lu", sum_low);

		fib1_low = fib2_low;
		fib1_high = fib2_high;
		fib2_low = sum_low;
		fib2_high = sum_high;
	}

	printf("\n");
	return (0);
}
