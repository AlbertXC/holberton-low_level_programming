#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at index
 *							  index of a dlistint_t linked list.
 * @head: Beginning of linked list.
 * @index: Index of the node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int c;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (c = 0; tmp != NULL; c++)
	{
		if (c == index)
		{
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			if (tmp->prev != NULL)
				tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
