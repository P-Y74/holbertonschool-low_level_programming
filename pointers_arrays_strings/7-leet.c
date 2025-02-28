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
	int i;
	char *temp = string;
	char lowLetter[] = {'a', 'e', 'o', 't', 'l'};
	char uppLetter[] = {'A', 'E', 'O', 'T', 'L'};
	int number[] = {4, 3, 0, 7, 1};

	for (; *string != '\0' ; string++)
	{
		for (i = 0 ; i < 5 ; i++)
		{
			if (lowLetter[i] == *string || uppLetter[i] == *string)
			{
				*string = number[i] + '0';
				i++;
			}
		}
	}
	return (temp);
}
