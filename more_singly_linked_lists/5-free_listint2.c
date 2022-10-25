#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: Beginning of linked list.
 *
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *vacant;

	if (head)
	{
		while (*head)
		{
			vacant = *head;
			*head = vacant->next;
			free(vacant);
		}
	}
}
