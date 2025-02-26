#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints even numbers
 * @str: String to print
 */
void puts2(char *str)
{
	int number = 0;

	while (str[number] != '\0')
	{
		if (number % 2 == 0)
		{
			_putchar(str[number]);
		}
		number++;
	}
	_putchar('\n');
}
