#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Initialize the elements of a two-dimensional array of
 * integers with specified width and height to 0
 *
 * @width: no of columns in the array
 * @height: no of rows in the array
 *
 * Return: pointer to the 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **row_ptrs;
	int i, j, k;

	if (width < 1 || height < 1)
		return ('\0');
	row_ptrs = malloc(height * sizeof(int *));
	if (!row_ptrs)
	{
		free(row_ptrs);
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		row_ptrs[i] = malloc(width * sizeof(int));
		if (!row_ptrs[i])
		{
			free(row_ptrs[i]);
			return ('\0');
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			row_ptrs[j][k] = 0;
	}
	return (row_ptrs);
}
