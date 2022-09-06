#include "main.h"

/**
 * puts_half - Function that prints half of
 *			   a string
 *@str: Sting to print
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int n, m = 0;

	while (*(str + m))
		m++;
	m = n / 2;
	if (m % 2)
		n += 1;
	while (n < m)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
