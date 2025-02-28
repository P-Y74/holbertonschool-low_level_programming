#include <stdio.h>
#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string
 *
 */
int separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
		c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
		c == ')' || c == '{' || c == '}');
}

char *cap_string(char *string)
{
	char *temp = string;
	int sep = 1;

	for (; *string != '\0' ; string++)
	{
		if (separator(*string))
		{
			sep = 1;
		}
		else if (*string >= 'a' && *string <= 'z' && sep)
		{
			*string = *string - ('a' - 'A');
			sep = 0;
		}
		else
		{
			sep = 0;
		}

	}
	return (temp);
}
