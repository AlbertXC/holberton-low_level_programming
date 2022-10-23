#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: Linked list.
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *tmp = h;

	for (i = 0; tmp != 0; i++)
	{
		if (tmp->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)";
			tmp = tmp->next;
			i++;
		}
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
