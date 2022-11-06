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
	dlistint_t *n_node, *p_node;
	unsigned int c = 0;

	if (!h)
		return (NULL);
	while (tmp)
		tmp = tmp->next, c++;
	if (idx > c)
		return (NULL);
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	if (idx == 0)
	{
		n_node->prev = NULL;
		n_node->next = *h;
		if (*h)
			(*h)->prev = n_node;
		*h = n_node;
		return (n_node);
	}
	tmp = *h;
	for (c = 0; c < idx; c++)
	{
		p_node = tmp;
		tmp = tmp->;
	}
	n_node->next = tmp;
	n_node->prev = p_node;
	p_node->next = n_node;
	if (tmp)
		tmp->prev = n_node;
	return (n_node);
}
