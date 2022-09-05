#include "main.h"

/**
 * void swap_int - Function that swaps the values
 *				   of two integers
 * @a: value of integer one
 * @b: value of integer two
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
