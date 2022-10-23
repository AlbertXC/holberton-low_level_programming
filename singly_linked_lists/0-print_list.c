#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: Linked list.
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *tmp = h;

	for(; tmp; *tmp = tmp->next, i++)
		printf("[%d] %s\n", tmp->len, tmp->str);
	return (i);
}
