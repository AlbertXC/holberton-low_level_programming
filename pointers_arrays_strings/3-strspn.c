#include "main.h"

/**
 * _strspn - Function that gets the lenght
 *			 of a prefix substring.
 * @s: string to locate
 * @accept: string to locate against
 *
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (!accept[y])
			break;
	}
	return (x);
}
