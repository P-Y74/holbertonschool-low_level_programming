#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculate the length of a string
 * @s: the string to count
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s && *s++)
	{
		length++;
	}
	return (length);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	char *copyName, *copyOwner;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	copyName = malloc(_strlen(name) + 1);
	if (copyName == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	copyOwner = malloc(_strlen(owner) + 1);
	if (copyOwner == NULL)
	{
		free(new_dog);
		free(copyName);
		return (NULL);
	}

	for (i = 0; i < _strlen(name); i++)
	{
		copyName[i] = name[i];
	}
	copyName[i] = '\0';
	for (j = 0; j < _strlen(owner); j++)
	{
		copyOwner[j] = owner[j];
	}
	copyOwner[j] = '\0';

	new_dog->name = copyName;
	new_dog->age = age;
	new_dog->owner = copyOwner;

	return (new_dog);
}
