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
	int num1, num2;

	num1 = '0';
	while (num1 <= '9')
	{
		num2 = '1';
		while (num2 <= '9')
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				if (!(num1 == '8' && num2 == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
