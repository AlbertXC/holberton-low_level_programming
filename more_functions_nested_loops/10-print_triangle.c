#include "main.h"

/**
 * print_triangle - Function that prints a triangle,
 *					followed by a new line
 * @size: size of the triangle
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int j, k;

	for (j = 0; j < size; j++)
	{
		for (k = 1; k < (size - j); k++)
			_putchar(' ');
		for (k--; k < size; k++)
			_putchar('#');
		if (j < (size - 1))
			_putchar('\n');
	}
}
