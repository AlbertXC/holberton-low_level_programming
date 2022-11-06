#include "lists.h"

/**
 * dlistint_len - Function that returns the number
 *				  of elements in a linked dlistint_t list.
 * @h: Linked list
 *
 * Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
