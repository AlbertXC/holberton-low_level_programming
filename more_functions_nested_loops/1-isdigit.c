#include "main.h"

/**
 * _isdigit - Function that checks for a digit (0 through 9).
 * @c: digit to be checked
 *
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}

	return (0);
}
