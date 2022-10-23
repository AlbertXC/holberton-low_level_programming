#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * @head: Beginning of linked list.
 * @str: String to be duplicated.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = 0;

	tmp = *head;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		for (i = 0; tmp->next !0; i++)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		tmp = new;
		return(tmp);
	}
	return (NULL);
}
