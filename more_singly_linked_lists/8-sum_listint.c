#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all 
 *				 the data (n) of a listint_t linked list.
 * @head: Beginning of linked list.
 *
 * Return: If list is empty, 0.
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
