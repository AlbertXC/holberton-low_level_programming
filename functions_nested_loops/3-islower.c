#include "main.h"

/**
 * _islower(int c) - Function that checks for lowercase character
 * @c: lowercase character to be checked
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
