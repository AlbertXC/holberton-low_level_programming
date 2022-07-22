#include <stdio.h>

/**
 * main- output Print the lowercase alphabet in reverse
 *
 * Return: return 0
 */

int main(void)
{
	char cba;

	for (cba = 'z'; cba >= 'a'; cba--)
	{
		putchar (cba);
	}

	putchar('\n');

	return (0);
}
