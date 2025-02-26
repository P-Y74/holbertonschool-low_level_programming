#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: String to print
 */
void puts_half(char *str)
{
	int string = 0;
	int half;

	while (str[string] != '\0')
	{
		string++;
	}
	if (string % 2 == 0)
	{
		half = string / 2;
	}
	else
	{
		half = (string + 1) / 2;
	}
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
