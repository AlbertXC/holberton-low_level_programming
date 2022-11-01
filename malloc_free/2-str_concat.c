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
	unsigned int w = 0, x = 0, y, z;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[w] != 0)
		w++;
	while (s2[x] != 0)
		x++;
	x++;
	v = malloc(sizeof(char) * (w + x));
	for (y = 0; y < w; y++)
		v[y] = s1[y];
	for (z = 0; z < x; y++, z++)
		v[y] = s2[z];
	return (v);

