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

	while (s[c] != '\0')
	{
		a++;
	}

	for (a -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
