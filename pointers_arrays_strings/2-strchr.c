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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
