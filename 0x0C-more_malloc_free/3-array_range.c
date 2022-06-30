#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum no of the array
 * @max: maximum no of the array
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, tmp = min;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * (max - min + 1));
	if (!ar)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		ar[i] = tmp++;
	}
	return (ar);
}
