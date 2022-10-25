#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 *				 in a linked listint_t list.
 * @h: Linked list.
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h);
{
	int i;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
