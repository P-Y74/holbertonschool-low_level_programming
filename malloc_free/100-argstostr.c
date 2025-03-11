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
 * *argstostr - Concatenates all the arguments of the program
 * @ac: Number of arguments passed to the program
 * @av: Array of strings containing the arguments
 *
 * Return: A pointer to a new string containing all arguments concatenated,
 *         each followed by a newline character ('\n')
 */
char *argstostr(int ac, char **av)
{
	int lenArg = 0, index = 0, i, j;
	char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		lenArg += _strlen(av[i]) + 1;
	}

	concat = malloc(sizeof(char) * (lenArg + 1));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concat[index++] = av[i][j];
		}
		concat[index++] = '\n';
	}
	concat[index] = '\0';

	return (concat);
}
