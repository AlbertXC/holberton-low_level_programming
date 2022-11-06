#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node
 *					  at the end of a dlistint_t list.
 * @head: Beginning of linked list.
 * @n: Add to list integer.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *tmp_h;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (!*head)
	{
		n_node->prev = NULL;
		*head = n_node;
	}
	else
	{
		tmp_h = *head;
		while (tmp_h->next)
			tmp_h = tmp_h->next;
		tmp_h->next = n_node;
		n_node->prev = tmp_h;
	}
	return (n_node);
}
