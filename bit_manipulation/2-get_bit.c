#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Binary number to be represented.
 * @index: The index, starting from 0 of the bit you want to get.
 *
 * Return: The value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (k = 0; k < index; k++)
		n = n >> 1;
	return ((n & 1));
}
