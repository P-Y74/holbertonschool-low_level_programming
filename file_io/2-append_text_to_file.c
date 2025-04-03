#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * _strlen - calculates the length of a string.
 *
 * @s: the string whose length needs to be calculated.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file to append to
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writeFile;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		writeFile = write(fd, text_content, _strlen(text_content));
		if (writeFile == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
