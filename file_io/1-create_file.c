#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 *
 * @s: La chaîne dont on souhaite connaître la longueur.
 *
 * Return: La longueur de la chaîne.
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
 * create_file - crée un fichier avec du contenu.
 *
 * @filename: le nom du fichier à créer.
 * @text_content: le contenu à écrire dans le fichier.
 *
 * Return: 1 sur succès, -1 sur échec.
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
