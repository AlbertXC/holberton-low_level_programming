#include "main.h"

/**
 * _strchr - Function that locates a character
 *			 in a string
 * @s: string to be located
 * @c: character to be located
 *
 * Return: A pointer to the first ocurrence.
 *		   NULL - if is not found
 */

char *_strchr(char *s, char c)
{
	int g;

	for (g = 0; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
			return (s + g);
	}

	return ('\0');
}
