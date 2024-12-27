#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head node of the doubly linked list.
 * @index: Index of the node to retrieve (starting at 0).
 *
 * Return: Address of the node at the given index, or NULL if the index does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmpcount = head;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (tmpcount)
		tmpcount = tmpcount->next, count++;

	if (index >= count)
		return (NULL);

	for (count = 0; count < index; count++)
		head = head->next;

	return (head);
}
