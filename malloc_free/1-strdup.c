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
	unsigned int a = 0;

	if (str == 0)
		return (0);
	while (str[a] != 0)
		a++;

	a++;
	s = malloc(sizeof(char) * a);
	for (a = 0; str[i] != 0; a++)
		s[a] = str[a];
	s[a] = 0;
	return (s);
}
