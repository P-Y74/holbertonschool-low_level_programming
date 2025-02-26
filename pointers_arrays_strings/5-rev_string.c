#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 */
void rev_string(char *s)
{
	char *reverse, temp;

	reverse = s;

	while (*reverse)
	{
		reverse++;
	}
	reverse--;
	while (s < reverse)
	{
		temp = *reverse;
		*reverse = *s;
		*s = temp;
		s++;
		reverse--;
	}
}
