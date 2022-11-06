#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements
 *					of a dlistint_t list.
 * @h: Linked list.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t i;

	for (i = 0; tmp; i++, tmp = tmp->next)
		printf("%d\n", tmp->n);

	return (i);
}
