#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers with each element
 * initialized to 0
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the array or NULL (on failure or if width or height <= 0)
 */
int **alloc_grid(int width, int height)
{
	int **array, *row, i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);

	while (i < height)
	{
		row = malloc(sizeof(int) * width);
		if (!row)
		{
			while (--i >= 0)
				free(array[i]);
			free(array);
			return (NULL);
		}
		array[i] = row;
		for (j = 0; j < width; j++)
			row[j] = 0;
		i++;
	}

	return (array);
}
