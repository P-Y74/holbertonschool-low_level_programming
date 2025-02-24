#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int repeat, numbers;

	for (repeat = 0 ; repeat < 10 ; repeat++)
	{
		for (numbers = 0 ; numbers <= 14 ; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar('1');
			}
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}
