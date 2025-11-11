#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: pointer to a string
 *
 * Return: void
 */

void _puts(char *str)
{
	int cnt = 0;

	while (str[cnt])
	{
		_putchar(str[cnt]);
		cnt++;
	}
	_putchar('\n');
}
