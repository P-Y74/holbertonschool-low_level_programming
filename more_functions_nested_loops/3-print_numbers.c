#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 */
void print_numbers(void)
{
	int number;

	for (number = 0 ; number <= 9 ; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
}
