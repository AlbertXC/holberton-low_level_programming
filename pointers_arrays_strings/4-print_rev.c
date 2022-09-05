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

	while (a >= 0)
	{
		if (s[a] == '\0')
		break;
		a++
	}
	for (a--; a >= 0; a--)
		_putchar(s[a]);

	_putchar('\n');
}
