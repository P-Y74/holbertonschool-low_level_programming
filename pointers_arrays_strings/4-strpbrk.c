#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: String to search in
 * @accept: The set of character to search for
 *
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *temp = accept;

		while (*temp)
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		if (*s == '\0')
		{
			return (temp);
		}
		s++;
	}
	return (NULL);
}
