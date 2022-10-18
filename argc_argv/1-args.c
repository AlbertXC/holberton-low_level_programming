#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints the number of arguments
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused))
{
	printf("%d\n", argc - 1);
	return (0);
}
