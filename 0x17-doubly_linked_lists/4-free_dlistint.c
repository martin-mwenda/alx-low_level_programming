#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees all nodes in a dlistint_t doubly linked list.
 * @head: Pointer to the head node of the doubly linked list.
 *
 * Return: None.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
