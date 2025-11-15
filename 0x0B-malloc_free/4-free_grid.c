#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid created by alloc_grid
 *
 * @grid: array of pointers to the grid
 * @height: no of rows in the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid && height)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
