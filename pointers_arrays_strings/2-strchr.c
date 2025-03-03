#include <stdio.h>
#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: String
 * @c: First occurence to return
 *
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
