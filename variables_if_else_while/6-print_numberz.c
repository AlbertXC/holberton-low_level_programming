#include <stdio.h>

/**
 * main- output Print single digit number base 10 starting from 0 using putchar
 *
 * Return: return 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
