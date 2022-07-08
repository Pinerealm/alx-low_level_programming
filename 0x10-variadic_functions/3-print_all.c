#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything passed as argument after format specification
 *
 * @format: list of the types of arguments passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int c = 0, i = 0, j;
	char *str;
	const char types[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), c = 1;
			break;
		case 's':
			str = va_arg(ap, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(ap);
}
