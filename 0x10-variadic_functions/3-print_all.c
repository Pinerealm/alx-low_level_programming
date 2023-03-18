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
	int idx = 0, j;
	char *chars = "cifs", *str;

	va_start(ap, format);
	while (format[idx])
	{
		j = 0;
		while (chars[j])
		{
			if (format[idx] == chars[j++] && idx != 0)
			{
				printf(", ");
				break;
			}
		}
		switch (format[idx])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		idx++;
	}
	printf("\n");
	va_end(ap);
}
