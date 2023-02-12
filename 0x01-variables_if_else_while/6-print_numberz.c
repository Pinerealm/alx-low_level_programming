#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 * using putchar without char variables
 * Return: 0 (on success)
 */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
