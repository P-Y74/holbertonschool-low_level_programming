#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The string to count
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s && *s++)
	{
		length++;
	}
	return (length);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **split;
	int i = 0, j, count = 0, len = _strlen(str);

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; i < len; i++)
		if ((str[i] != ' ' && str[i] != '\t') &&
		    (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
			count++;
	if (count == 0)
		return (NULL);
	split = malloc(sizeof(char *) * (count + 1));
	if (split == NULL)
		return (NULL);
	for (i = 0, count = 0; i < len; i++)
	{
		if ((str[i] != ' ' && str[i] != '\t') &&
		    (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
		{
			int wordLen = 0;

			while (str[i + wordLen] != ' ' && str[i + wordLen] != '\t' &&
			       str[i + wordLen] != '\0')
				wordLen++;
			split[count] = malloc(wordLen + 1);
			if (split[count] == NULL)
			{
				while (count--)
					free(split[count]);
				free(split);
				return (NULL);
			}
			for (j = 0; j < wordLen; j++)
				split[count][j] = str[i + j];
			split[count++][j] = '\0';
			i += wordLen - 1;
		}
	}
	split[count] = NULL;
	return (split);
}
