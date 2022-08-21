#include "main.h"

/**
 * print_most_numbers - Function that prints the numbers, from 0 to 9, followed by a new line. Do not print 2 & 4
 *
 * Returns: Printed numbers from 0 to 9 w/o 2 & 4
 */

void print_most_numbers(void)
{
	char num;

	for(num = '0'); num <= '9'; num++)
	{
		if(!(num == '2' || num == '4'))
			_putchar(num);
	}
	_putchat('\n');
}
