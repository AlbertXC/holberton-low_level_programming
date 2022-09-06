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
	int d = 0;

	while (*(str + d))
	{
		_putchar(*(str + d));
		d = d + 2;
	}
	_putchar('\n');
}
