#include <stdio.h>
#include <unistd.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specific index in a doubly
 * linked list.
 * @head: A pointer to the first node in the list.
 * @index: The index of the node to retrieve.
 *
 * Return: The node at the specified index, or NULL if the index is out
 * of range.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *find = head;
	unsigned int count = 0;

	while (find != NULL)
	{
		if (count == index)
		{
			return (find);
		}
		count++;
		find = find->next;
	}
	return (NULL);
}
