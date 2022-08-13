#include "main.h"

/**
 * main- Function that checks for uppercase character.
 * @c: upper character to be checked.
 *
 * Return: 1 if c is uppercase or 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
