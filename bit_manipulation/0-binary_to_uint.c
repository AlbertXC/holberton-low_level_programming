#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: binary string
 *
 * Return: The converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, deci = 0;

	if (b == NULL)
		return (0);
	while (b[n] != '\0')
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
		deci <<= 1;
		if (b[n] == '1')
			deci ^= 1;
		n++;
	}
	return (deci);
}
