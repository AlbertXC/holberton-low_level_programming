#include "main.h"

/**
 * print_square - Function that prints a square,
 *				  followed by a new line
 * @size: size of square
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int l, m;

	if (size <= 0)
			_putchar('\n');
	for (l = 0; l < size; l++)
	{
		for (m = 0; m < (size); m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
