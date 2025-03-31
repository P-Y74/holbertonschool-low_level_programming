#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list
 * @h: Pointer to the first node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	/** Traverse the list and print each node's content */
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
