#include "main.h"

/**
 * _strlen - Function that returns the
 *			 lenght of a string
 * @s: String to count
 *
 * Return: String lenght
 */

int _strlen(char *s)
{
int x = 0;

	while (*(s + x))
		x++;

	return (x);
}
