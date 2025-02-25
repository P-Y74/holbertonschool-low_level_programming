#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: calculate length of a string
 *
 * Return: string
 */
int _strlen(char *s)
{
	int string = 0;

	while (*s++)
		string++;

	return (string);
}
