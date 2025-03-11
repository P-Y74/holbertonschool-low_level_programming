#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D array previously allocated by alloc_grid
 * @grid: Pointer to the 2D array to free
 * @height: Number of rows in the 2D array
 *
 * This function first frees each row of the array,
 * then frees the array itself.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
