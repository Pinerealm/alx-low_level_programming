#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything passed as argument according to
 * the format specification
 * @format: list of the types of arguments passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int idx = 0, printed = 0;
	char *str;

	va_start(ap, format);
	while (format && format[idx])
	{
		switch (format[idx])
		{
			case 'c':
				printed = printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printed = printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printed = printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					str = "(nil)";
				printed = printf("%s", str);
				break;
		}
		idx++;
		if (printed && format[idx])
			printf(", ");
		printed = 0;
	}
	printf("\n");
	va_end(ap);
}
