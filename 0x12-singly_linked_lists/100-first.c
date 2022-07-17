#include <stdio.h>

/**
 * print_before_main - prints a string before the main program is executed
 *
 * Return: void
 */
void __attribute__((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my body for this great contest,\n");
}
