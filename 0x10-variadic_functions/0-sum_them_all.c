#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 * @n: number of parameters to sum up
 *
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ints;
	unsigned int i = 0;
	int num, sum = 0;

	va_start(ints, n);

	for (num = va_arg(ints, int); i < n; num = va_arg(ints, int), i++)
	{
		sum += num;
	}
	va_end(ints);

	return (sum);
}
