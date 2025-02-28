#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - Changes all lowercase letters of a string to uppercase
 * @a: String
 *
 * Return: temp
 */
char *string_toupper(char *a)
{
	char *temp = a;

	while (*a != '\0')
	{
		if (*a >= 'a' && *a <= 'z')
		{
			*a = *a - 32;
		}
		a++;
	}
	return (temp);
}
