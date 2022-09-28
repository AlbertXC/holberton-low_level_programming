#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of the
 *				   the two diagonals of a square matrix of integers
 *
 * @a: the matrix of integers
 * @size: the size of the matrix
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int z, sum1 = 0, sum2 = 0;

	for (z = 0; z < size; z++)
	{
		sum1 += a[(size + 1) * z];
		sum2 += a[(size - 1) * (z + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
