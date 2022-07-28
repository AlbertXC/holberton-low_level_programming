#include "main.h"

/**
 * times_table - Function that prints the 9 times table,
 *				 starting with 0
 *
 * Return: Always 0
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <=9; x++)
	{
		_putchar('0');

		for (y = 0; y <=9; y++)
		{
			_putchar(',');
			_putchar(' ');

			z = x * y;

			if (prod <=9)
				_putchar(' ');
			else
				_putchar((z / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
