#include <stdio.h>
#include "lists.h"

/**
 * list_len - Print number of elements in a linked list
 * @h: Pointer to the first node
 *
 * Return: count
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
