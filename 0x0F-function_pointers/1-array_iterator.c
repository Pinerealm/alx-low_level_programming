#include <stdio.h>

/**
 * array_iterator - executes function on each element of an array
 * @array: pointer to an array of integers
 * @size: size of the array
 * @action: action to carry out on the elememt
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < (int)size; i++)
			action(array[i]);
	}
}
