#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings seperated by a seperator
 * @separator: character seperating strings
 * @n: number of strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i = 0;
	char *str;

	va_start(strs, n);
	str = va_arg(strs, char *);
	for ( ; i < n; str = va_arg(strs, char *), i++)
	{
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
