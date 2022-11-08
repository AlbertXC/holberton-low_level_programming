#include "main.h"

/**
 * array_range - Function that creates an array of integers.
 * @min: 1st value of the array.
 * @max: 2nd value of the array.
 *
 * Return: The pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *a, i, s;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = min++;

	return (array);
}
