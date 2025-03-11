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
 * string_nconcat - Concatenate s1 and first n characters of s2
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the newly allocated concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	concat[0] = '\0';

	_strcat(concat, s1);

	for (i = 0; i < n; i++)
	{
		concat[_strlen(s1) + i] = s2[i];
	}
	concat[len1 + i] = '\0';

	return (concat);
}
