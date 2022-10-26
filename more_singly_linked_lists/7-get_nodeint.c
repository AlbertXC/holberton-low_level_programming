#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node
 *						  of a listint_t linked list.
 * @head: Beginning of linked list.
 * @index: nth node position
 *
 * Return: Returns the nth node, if the node
 *		   does not exist, NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d;

	for (d = 0; d < index; d++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
