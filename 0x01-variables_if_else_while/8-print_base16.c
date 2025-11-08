#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lower case followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
	{
		putchar(l);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
