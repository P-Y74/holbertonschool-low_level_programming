#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Creates an array of integers from min to max, inclusive
 * @min: Minimum value to start the array
 * @max: Maximum value to end the array
 *
 * Return: A pointer to the newly created array, or NULL if allocation fails
 */
int *array_range(int min, int max)
{
	int *array;
	int total, i;

	if (min > max)
	{
		return (NULL);
	}

	total = max - min + 1;

	array = malloc(sizeof(int) * total);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
