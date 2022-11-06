#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new
 *							  node at a given position.
 * @h: Linked list.
 * @idx: The new node.
 * @n: Add to list integer.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	while (idx > i)
	{
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	return (tmp);
}
