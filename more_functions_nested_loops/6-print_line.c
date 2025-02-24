#include <stdio.h>
#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number that draws a line
 *
 */
void print_line(int n)
{
	int number = 0;

	while (number < n)
	{
		_putchar('_');
		if (number < 0)
		{
			_putchar('\n');
		}
		number++;
	}
	_putchar('\n');
}
