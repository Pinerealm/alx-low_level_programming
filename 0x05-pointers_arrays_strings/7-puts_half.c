#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int idx = 0, start;

	while (str[idx] != '\0')
	{
		idx++;
	}
	if (idx % 2 == 0)
		start = idx / 2;
	else
		start = (idx + 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
