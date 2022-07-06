#include <stdio.h>

/**
 * print_name - prints a name in the manner specified by the function passed
 * @name: pointer to a name
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
