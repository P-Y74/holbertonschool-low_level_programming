#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && !(*s1 - *s2))
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
