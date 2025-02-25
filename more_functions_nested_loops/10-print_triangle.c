#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Function that prints a triangle
 * @size: Define the triangle
 *
 */
void print_triangle(int size)
{
	int lines = 1, columns = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (lines <= size)
	{
		while (columns <= size)
		{
			if ((lines + columns) <= size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			columns++;
		}
		columns = 1;
		_putchar('\n');
		lines++;
	}
}
