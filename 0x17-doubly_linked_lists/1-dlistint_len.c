#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Counts the number of elements
 * in a doubly linked dlistint_t list.
 * @h: Pointer to the head node of the doubly linked list.
 *
 * Return: The total number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
