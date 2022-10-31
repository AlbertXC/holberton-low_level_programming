#include "main.h"

/**
 * _strdup - Function that returns a pointer to a newly
 *			 allocated space in memory.
 * @str: String given as a parameter
 *
 * Return: a pointer to the duplicated string. It returns
 *		   NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *s;
	int a, b = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		b++;

	s = malloc(sizeof(char) * (b + 1));

	if (s == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		s[a] = str[a];

	s[b] = '\0';

	return (s);
}
