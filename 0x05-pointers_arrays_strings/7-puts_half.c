#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int idx = 0, start;

	while (str[idx])
		idx++;
	start = (idx + 1) / 2;

	while (str[start])
		_putchar(str[start++]);
	_putchar('\n');
}
