#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - Copies memory area
 * @dest: Pointer that will receive src
 * @src: Pointer to copy in dest
 * @n: Number of bytes from memory area src to dest
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *copyDest = dest;
	char *copySrc = src;

	for (i = 0; i < n; i++)
	{
		copyDest[i] = copySrc[i];
	}
	return (dest);
}
