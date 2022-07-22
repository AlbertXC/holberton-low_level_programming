#include <stdio.h>

/**
 * main- output Print alphabet in lowercase and UPPERCASE
 *
 * Return: return 0
 */

int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}

	for (abc = 'A'; abc <= 'Z'; abc++)
	{
		putchar(abc);
	}

	putchar ('\n');
	return (0);
}
