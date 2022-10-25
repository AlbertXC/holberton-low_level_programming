#include "lists.h"

/**
 * listint_len - 
 * @h:
 * Return: 
 */
size_t listint_len(const listint_t *h);
{
	int i;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
