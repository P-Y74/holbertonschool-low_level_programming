#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Calculate the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s && *s++)
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;
	char *strCopy;

	if (str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	strCopy = strdup(str);

	if (strCopy == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strCopy;
	newNode->len = _strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newNode;

	return (newNode);
}
