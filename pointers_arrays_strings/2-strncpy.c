#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - Copies a string
 * @dest: First string
 * @src: Second string
 * @n: Decount
 *
 * Return: temp
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (temp);
}
