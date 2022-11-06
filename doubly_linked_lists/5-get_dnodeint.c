#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns
 *						   the nth node of a dlistint_t linked list.
 * @head: Beginning of linked list.
 * @index: Index of the node.
 *
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i <= index; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
