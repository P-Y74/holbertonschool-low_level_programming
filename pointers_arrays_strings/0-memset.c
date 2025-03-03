#include <stdio.h>
#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: Pointer to a memory area to be filled
 * @b: Constant byte value to fill the memory with
 * @n: Number of byte to fill
 *
 * Return: temp
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *temp = s;

	while (i < n)
	{
		*s = b;
		i++;
		s++;
	}
	return (temp);
}
