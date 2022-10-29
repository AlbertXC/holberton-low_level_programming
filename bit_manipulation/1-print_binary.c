#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: Binary number to be represented.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print binary(n >> 1);

	_putchar((n & 1) + '0');
}
