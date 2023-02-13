#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 48; n < 58; n++)
	{
		printf("%c", n);
	}
	printf("\n");

	return (0);
}
