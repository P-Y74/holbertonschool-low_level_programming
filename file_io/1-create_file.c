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
 * create_file - creates a file and writes text to it.
 *
 * @filename: the name of the file to be created.
 * @text_content: the content to be written to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t textWrite;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
		{
			return (-1);
		}
	}

	if (text_content != NULL)
	{
		textWrite = write(fd, text_content, _strlen(text_content));
		if (textWrite == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
