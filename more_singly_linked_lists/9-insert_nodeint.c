#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new
 *							 node at a given position.
 * @head: Beginning of linked list.
 * @idx: The index of the list.
 * @n: New node value
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new, *present;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		present = *head;
		for (x = 0; x < idx - 1 && present != NULL; x++)
		{
			present = present->next;
		}
		if (present == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = present->next;
	present->next = new;
	return (new);
}
