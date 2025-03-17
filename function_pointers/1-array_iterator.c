#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Applies a function to each element of an array
 * @array: The array whose elements will be processed
 * @size: The number of elements in the array
 * @action: Pointer to a function that takes an int as a parameter
 * and returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
