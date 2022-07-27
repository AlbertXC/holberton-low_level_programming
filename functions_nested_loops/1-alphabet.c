#include "main.h"

/**
 * main - Function that prints the alphabet, in lowercase, new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
