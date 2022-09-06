#include "main.h"

/**
 * puts2 - Function that prints every other character
 *		   of a string, starting with the 1st character
 * @str: string to print
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int c = 0, d = 0;

	while (str[c++])
		d++;

	for (c = 0; c < d; c += 2)
		_putchar(str[c]);

	_putchar('\n');
}
