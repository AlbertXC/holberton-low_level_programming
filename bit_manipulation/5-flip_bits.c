#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 *			   you would need to flip to get from one number to another.
 * @n: Flipped number 1
 * @m: Flipped number 2
 *
 * Return: The number of bits you would need to flip
 *		   to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}

	return (bits)
}
