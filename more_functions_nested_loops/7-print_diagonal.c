#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: space to display
 */
void print_diagonal(int n)
{
	int number, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (number = 0 ; number < n ; number++)
	{
		for (space = 0 ; space < number ; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
