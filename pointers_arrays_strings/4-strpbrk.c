#include "main.h"

/**
 * _strpbrk - Function that searches a string
 *			  for any of a aet of bytes
 * @s: locates the 1st ocurrence in the string
 * @accept: locates the 2nd ocurrence in the string
 *
 * Return: a pointer to the byte that matches one
 *		   of the bytes, or NULL if substring is not found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int u, v;

	for (u = 0; *(s + u) != '\0'; u++)
	{
		for (v = 0; *(accept + v) != '\0'; v++)
		{
			if (*(s + u) == *(accept + v))
				return (s + u);
		}
	}
	return ('\0');
}
