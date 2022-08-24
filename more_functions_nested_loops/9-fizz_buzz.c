#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints the numbers from 1 to 100,
 *		  followed by a new line
 *		  Multiples of three print Fizz
 *		  Multiples of five print Buzz
 *		  Multiples of both three and five print FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int r;

	r = 1;
	printf("%d", r);
	for (r = 2; r <= 100; r++)
	{
		if ((r % 3 == 0) && (r % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (r % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (r % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", r);
		}
	}
	printf("\n");
	return (0);
}
