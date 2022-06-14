#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: pointer to a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = len / 2; i < len; i++)
	{
		if (len % 2 == 0)
			_putchar(str[i]);
		else
			_putchar(str[i + 1]);
	}
	_putchar('\n');
}
