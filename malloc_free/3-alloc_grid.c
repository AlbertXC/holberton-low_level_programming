#include "main.h"

/**
 * alloc_grid - Function that returns a pointer
 *				to a 2 dimensional array of integers.
 * @width: width 2D array
 * @height: height 2d array
 *
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int y, z;

	if (width < 1 || height < 1)
		return (NULL);

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		a[y] = malloc(sizeof(int) * width);
		if (a[y] == NULL)
		{
			for (y = y - 1; y >= 0; y--)
				free(a[y]);
			free(a);
			return (NULL);
		}
		else
		{
			for (z = 0; z < width; z++)
			a[y][z] = 0;
		}
	}
	return (a);
}
