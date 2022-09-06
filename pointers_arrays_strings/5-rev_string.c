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

	while (s[j++])
		e++;

	for (j = e - 1; j >= e / 2; j--)
	{
		str = s[j];
		s[j] = s[e - j - 1];
		s[e - j - 1] = str;
	}
}
