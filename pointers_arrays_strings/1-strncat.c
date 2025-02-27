#include <stdio.h>
#include "main.h"

/**
 * *_strncat - Concatenates two strings that will uses n bytes from src
 * @dest: First string
 * @src: Second string
 * @n: n bytes
 *
 * Return: temp
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (temp);
}
