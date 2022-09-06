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
	char str[700];

	while (*(s + e))
	{
		*(str + e) = *(s + e);
		e++;
	}
	e = e - 1;
	while (i >= 0)
	{
		*(s + e) = *(str + f);
		e++;
		f++;
	}
}
