#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: Pointer to the string to be printed in reverse, traversed recursively
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
