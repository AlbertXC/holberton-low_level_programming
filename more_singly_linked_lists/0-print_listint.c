#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: Linked list.
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
