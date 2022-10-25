#include "lists.h"

/**
 * pop_listint - function that deletes the head
 *				 node of a listint_t linked list.
 * @head: Beginning of linked list.
 *
 * Return: The head node’s data (n),
 *		   if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *vacant;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	vacant = *head;
	*head = (*head)->next;
	free(vacant);
	return (n);
}
