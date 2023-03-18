#include <stdio.h>

/**
 * int_index - searches for an integer in an array with a function
 *
 * @array: pointer to the arrray to be searched
 * @size: size of the array
 * @cmp: pointer to function that compares values
 *
 * Return: index of first element for which cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}

	return (-1);
}
