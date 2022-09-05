#include "main.h"

/**
 * print_rev - Fuction that prints a string,
 *			   in reserve
 * @s: Reverse string to print
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int a = 0;

	while (*(s + a))
		  a++;
	a = a - 1;
	while (i >= 0)
	{
		_putchar(*(s + a));
		a--;
	}
	_putchar('\n');
}
