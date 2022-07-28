#include "main.h"

/**
 * jack_bauer - Function that prints every minute of the day,
 *				starting from 00:0 to 23:59
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hr, min;
	for (hr = 0; min <= 23; hour++)
	{
		for (min = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
