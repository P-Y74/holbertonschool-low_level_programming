#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && !(*s1 - *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
