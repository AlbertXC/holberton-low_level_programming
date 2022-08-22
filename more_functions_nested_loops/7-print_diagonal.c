#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal
 * @n: Number of times the character \ should be printed
 *
 * Return: Diagonal line
 */

void print_diagonal(int n)
{
	int d, l;

	if (n <= 0)
		_putchar('\n');
	for (d = 0; d < 0; d++)
	{
		for (l = 0; l < d; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
