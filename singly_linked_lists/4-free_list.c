#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free a linked list of type list_t
 * @head: Pointer to the head of the list
 *
 * Description: This function frees all the nodes of a list_t linked list.
 * It also frees the allocated strings within the nodes.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
