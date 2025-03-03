#include <stdio.h>
#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: String
 * @c: First occurence to return
 *
 * Return: \0
 */
char *_strchr(char *s, char c)
{
	char *temp = s;

	while (*temp != '\0')
	{
		if (*temp == c)
		{
			return (temp);
		}
		temp++;
	}
	return (NULL);
}
