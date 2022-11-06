#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list.
 * @head: Beginning of linked list.
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
