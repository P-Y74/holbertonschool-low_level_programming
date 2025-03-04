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
		char *temp_h = haystack;
		char *temp_n = needle;

		while (*temp_n && *temp_h == *temp_n)
		{
			temp_h++;
			temp_n++;
		}
		if (!*temp_n)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
