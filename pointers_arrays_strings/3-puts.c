#include <stdio.h>
#include "main.h"

/**
 * _puts - Function that prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	_putchar(*str);
	while (*str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
