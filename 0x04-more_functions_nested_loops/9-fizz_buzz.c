#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers 1-100: for multiples of 3, print Fizz;
 * for multiples of 5, print Buzz; for multiples of 3 and 5, print FizzBuzz
 * Return: Always 0 (on success)
 */
int main(void)
{
	short i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
