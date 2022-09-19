#include "main.h"

/**
 * string_toupper - Function that changes all lowercase
 *					letters of a string to uppercase
 * @s: string to change
 *
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (*(s + x))
	{
		if (*(s + x) >= 'a' && *(s + x) <= 'z')
			*(s + x) -= 'a' - 'A';
		x++;
	}
	return (s);
}
