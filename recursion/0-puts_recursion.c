#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: Pointer to the string to be printed, traversed recursively
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
