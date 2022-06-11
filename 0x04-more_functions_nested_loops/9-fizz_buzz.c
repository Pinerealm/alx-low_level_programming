#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1-100: prints 'Fizz' if number is a multiple of 3,
 * Buzz if number is a multiple of 5, and FizzBuzz if a multiple of
 * both 3 and 5
 *
 * Return: Always (0)
 */

int main(void)
{
	int i, j = 1;

	printf("%d", j);
	for (i = 2; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf(" FizzBuzz");

		else if (i % 5 == 0)
			printf(" Buzz");

		else if (i % 3 == 0)
			printf(" Fizz");

		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
