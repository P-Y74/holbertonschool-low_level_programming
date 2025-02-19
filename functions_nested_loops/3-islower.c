#include <stdio.h>
#include "main.h"

/**
 * _islower - Check for lowercase character
 * @c: the character to compare
 *
 * Return: 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
