#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers seperated by a seperator
 * @separator: character seperating numbers
 * @n: no of numbers to print
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
		printf("%d", num);
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ints);
}
