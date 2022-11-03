#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid previously
 *			   created by your alloc_grid function.
 * @grid: The address of the two dimensional grid.
 * @height: Height of the grid.
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
		free(grid[r]);
	free(grid);
}
