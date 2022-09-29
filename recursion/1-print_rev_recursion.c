#include "main.h"

/**
 * _print_rev_recursion - Function that returns the lenght
 *						  of a string
 * @s: string
 *
 * Return: the lenght of a string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
