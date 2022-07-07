#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers seperated by a seperator
 * @separator: character seperating numbers
 * @n: number of parameters to sum up
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ints;
	unsigned int i = 0;
	int num;

	va_start(ints, n);

	for (num = va_arg(ints, int); i < n; num = va_arg(ints, int), i++)
	{
		if (separator)
		{
			if (i < (n - 1))
				printf("%d%s", num, separator);
			else
				printf("%d\n", num);
		}
		else
		{
			if (i < (n - 1))
				printf("%d", num);
			else
				printf("%d\n", num);
		}
	}
	va_end(ints);
}
