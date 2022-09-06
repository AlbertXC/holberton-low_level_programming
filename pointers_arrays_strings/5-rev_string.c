#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: string to reverse
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	int e = 0, f = 0;
	char str;

	while (s[f++])
		e++;

	for (f = e - 1; f >= e / 2; f--)
	{
		str = s[f];
		s[f] = s[e - f - 1];
		s[e - f - 1] = str;
	}
}
