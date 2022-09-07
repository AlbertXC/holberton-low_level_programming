#include "main.h"

/**
 * print_array - Function that prints n elements of
 *				 an array of integers
 * @n: numbers of elements of the array
 * @a: array of integer
 */

void print_array(int *a, int n)
{
	int r = 0;

	for (; r < n; r++)
	{
		printf("%d", *(a + r));
		if (r != (n - 1))
			printf(", ");
	}
	printf("\n");
}
