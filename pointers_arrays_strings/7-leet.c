#include <stdio.h>
#include "main.h"

/**
 * *leet - Function that encodes a string into 1337
 * @string: String to encode
 *
 * Return: temp
 */
char *leet(char *string)
{
	char *temp = string;

	for (; *string != '\0' ; string++)
	{
		if (*string == 'a' || *string == 'A')
		{
			*string = 4 + '0';
		}
		else if (*string == 'e' || *string == 'E')
		{
			*string = 3 + '0';
		}
		else if (*string == 'o' || *string == 'O')
		{
			*string = 0 + '0';
		}
		else if (*string == 't' || *string == 'T')
		{
			*string = 7 + '0';
		}
		else if (*string == 'l' || *string == 'L')
		{
			*string = 1 + '0';
		}
	}
	return (temp);
}
