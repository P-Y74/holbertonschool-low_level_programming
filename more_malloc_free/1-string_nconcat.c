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
 * string_nconcat - Concatenate s1 and first n characters of s2
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the newly allocated concatenated string
 * or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
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

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';

	return (concat);
}
