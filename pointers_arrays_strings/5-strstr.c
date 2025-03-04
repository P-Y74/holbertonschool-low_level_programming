#include <stdio.h>
#include "main.h"

/**
 * *_strstr - Locates a substring
 * @haystack: String to search in
 * @needle: Substring to search for
 *
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp = needle;

		while (*temp)
		{
			if (*haystack == *temp)
			{
				return (needle);
			}
			temp++;
		}
		haystack++;
	}
	return (NULL);
}
