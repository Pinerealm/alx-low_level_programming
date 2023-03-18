#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * chosen by a user
 * @s: pointer to the operator
 *
 * Return: function pointer to the chosen operation
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while ((ops[i].op))
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
