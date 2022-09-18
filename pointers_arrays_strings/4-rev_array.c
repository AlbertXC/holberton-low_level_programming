#include "main.h"

/**
 * reverse_array- Function that reverse the content
 *				  of an array of integers
 * @a: integer to be reversed
 * @n: elements in the array
 */

void reverse_array(int *a, int n)
{
	int t, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
