#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: Beginning of linked list.
 *
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *vacant;

	while ((vacant = head) != NULL)
	{
		head = head->next;
		free(vacant->str);
		free(vacant);
	}
}
