#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 *
 * @s: pointer to a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int cnt = 0;

	while (s[cnt] != '\0')
	{
		cnt++;
	}

	while (cnt--)
	{
		_putchar(s[cnt]);
	}
	_putchar('\n');
}
