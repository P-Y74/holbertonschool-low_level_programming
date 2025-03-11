#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of memory to allocate.
 *
 * Return: Pointer to the allocated memory or terminates the program
 *         with exit status 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *temp;

	temp = malloc(b);
	if (temp == NULL)
	{
		exit(98);
	}

	return (temp);
}
