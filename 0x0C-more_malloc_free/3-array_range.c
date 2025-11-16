#include <stdlib.h>

/**
 * array_range - creates an array of integers containing all values
 * from min (included) to max (included)
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *num_array, idx;

	if (min > max)
		return (NULL);

	num_array = malloc(sizeof(int) * (max - min + 1));
	if (!num_array)
		return (NULL);

	for (idx = 0; min <= max; idx++, min++)
		num_array[idx] = min;

	return (num_array);
}
