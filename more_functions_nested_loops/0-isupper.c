#include "main.h"

/**
 * _isupper - Function that checks for uppercase character.
 * @c: uppercase character to be checked
 *
 * Return: 1 if c is lowecase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
