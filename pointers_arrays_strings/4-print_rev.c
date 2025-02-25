#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: String to reverse
 */
void print_rev(char *s)
{
	char *reverse = s;

	while (*s)
	{
		s++;
	}
	while (s != reverse)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
