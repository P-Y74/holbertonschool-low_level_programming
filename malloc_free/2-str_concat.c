#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: Pointer to the string whose length is calculated
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}

/**
 * *_strcat - Concatenates two strings
 * @dest: Destination buffer where src will be appended
 * @src: String to append to dest
 *
 * Return: Pointer to the resulting concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

/**
 * str_concat - Concatenates two strings into a newly allocated memory space
 * @s1: First string (can be NULL, treated as an empty string)
 * @s2: Second string (can be NULL, treated as an empty string)
 *
 * Return: Pointer to a newly allocated space containing s1 followed by s2,
 *         or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length = _strlen(s1) + _strlen(s2) + 1;

	concat = malloc(sizeof(char) * length);

	if (concat == NULL)
	{
		return (NULL);
	}

	_strcat(concat, s1);
	_strcat(concat, s2);

	return (concat);
}
