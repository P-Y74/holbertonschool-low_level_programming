#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Return:void
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a', repeat = 0;

	while (repeat < 10)
	{
		repeat++;
	        while (alphabet <= 'z')
		{
			_putchar(alphabet++);
		}
		alphabet = 'a';
		_putchar('\n');
	}
}
