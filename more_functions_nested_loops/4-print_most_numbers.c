#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Prints the number from 0 to 9
 *
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0 ; number <= 9 ; number++)
	{
		if (number != 2 && number != 4)
		{
			_putchar(number + '0');
		}
	}
	_putchar('\n');
}
