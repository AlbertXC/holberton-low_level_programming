#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at
 *							 index index of a listint_t linked list.
 * @head: Beginning of linked list
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *new, *present;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
		return (1);
	}
	present = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (present->next == NULL)
			return (-1);
		present = present->next;
	}
	new = present->next;
	present->next = new->next;
	free(new);
	return (1);
}
