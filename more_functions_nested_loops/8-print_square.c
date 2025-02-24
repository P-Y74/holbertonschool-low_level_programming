#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 *
 */
void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
