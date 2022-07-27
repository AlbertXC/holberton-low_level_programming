#include "main.h"

/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet, in lowercase, a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char abc;
	int c = 0;

	while (c <= 9)
	{
		for(abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');

		c++;
	}
}
