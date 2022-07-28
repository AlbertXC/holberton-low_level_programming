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
	
	for (hr = 0; min <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
