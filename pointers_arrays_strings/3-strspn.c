#include <stdio.h>
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Bytes in initial segment
 * @accept: Length of the string
 *
 * Return: length - 1
 */
unsigned int _strspn(char *s, char *accept)
{
	char length = 0;

	while (*s++)
	{
		if (*accept != *s)
		{
			s++;
		}
		length++;
	}
	return (length - 1);
}
