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
 * *_strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: Pointer to a string to duplicate
 *
 * Return: A pointer to the duplicated string,
 * or NULL if memory allocation fails
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc((_strlen(str) + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
