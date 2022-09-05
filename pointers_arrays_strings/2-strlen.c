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
	int x = 0;

	while (*s[x] != '\0')
		x++;

	return (x);
}
