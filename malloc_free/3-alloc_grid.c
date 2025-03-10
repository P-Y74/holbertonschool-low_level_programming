#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2D array of integers initialized to 0
 * @width: The number of columns
 * @height: The number of rows
 *
 * Return: Pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array2d;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array2d = malloc(height * sizeof(int *));
	if (array2d == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array2d[i] = malloc(width * sizeof(int));
		if (array2d[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array2d[j]);
			}
			free(array2d);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			array2d[i][j] = 0;
		}
	}
	return (array2d);
}
