#include <stdio.h>
#include "lists.h"

/**
 * print_list - List to print contain in nodes
 * @h: Pointer that navigate into nodes
 *
 * Return: count
 */
size_t print_list(const list_t *h)
{
	int count = 0;

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
