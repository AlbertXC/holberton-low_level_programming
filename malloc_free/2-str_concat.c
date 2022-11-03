#include "main.h"

/**
 * str_concat - Function that concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer should point to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *v;
	int w, x = 0, y = 0}

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (w = 0; s1[w] || s2[w]; w++)
		y++;

	v = malloc(sizeof(char) * y);

	if (v == NULL)
		return (NULL);

	for (w = 0; s1[w]; w++)
		v[x++] = s2[x];

	for (w = 0; s2[w]; w++)
		v[x++] = s2[w];

	return (v);
}
