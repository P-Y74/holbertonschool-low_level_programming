#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a double linked list
 * @head: Double pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
