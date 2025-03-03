#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 *
 */
void rev_string(char *s)
{
	int swap;

	while (*s)
	{
		putchar(s++);
	}
}
