#include "main.h"

/**
 * main - Write a function that prints the alphabet, in lowercase, followed by a new line.
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
