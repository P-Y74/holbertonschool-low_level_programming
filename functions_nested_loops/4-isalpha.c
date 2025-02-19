#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: character to compare
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
