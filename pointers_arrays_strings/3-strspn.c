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
	unsigned int i = 0;

	while (*s)
	{
		int found = 0;
		char *temp = accept;

		while (*temp)
		{
			if (*s == *temp)
			{
				found = 1;
				break;
			}
			temp++;
		}
		if (!found)
		{
			break;
		}
		i++;
		s++;
	}
	return (i);
}
