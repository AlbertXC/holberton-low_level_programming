#include <stdio.h>

/**
 * main- Program that prints all arguments it receives.
 * @argc: Number od arguments
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char * argv[])
{
	int g;

	for (g = 0; g < argc; g++)
		printf("%s\n", argv[g]);
	return (0);
}
