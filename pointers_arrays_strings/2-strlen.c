#include "main.h"

/**
 * _strlen - Function that returns the
 *			 lenght of a string
 * @x: String to count
 *
 * Return: String lenght
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s[c] != '\0')
		c++;

	return (c);
}
