#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts the second from the first integer
 * @a: first integer
 * @b: second integer
 *
 * Return: Difference between the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Multiplication product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides the first by the second integer
 * @a: first integer
 * @b: second integer
 *
 * Return: Division result
 */

int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - performs a modulo (remainder) operation on two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Remainder of division operation
 */

int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
