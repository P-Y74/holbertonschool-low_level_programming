#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Creates an array of chars, and initializes it
 * with a specific char
 *
 * @size: The number of elements in the array
 * @c: The character used to initialize the array
 *
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = 0;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
