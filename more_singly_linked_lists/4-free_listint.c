#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list.
 * @head: Beginning of linked list.
 *
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *vacant;

	while ((vacant = head) != NULL)
	{
		head = head->next;
		free(vacant);
	}
}
