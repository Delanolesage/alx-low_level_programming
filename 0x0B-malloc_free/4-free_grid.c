#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by
 * the alloc_grid function
 * @grid: the grid
 * @height: the height of the grid
 *
 * void: nothing to return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	return (grid);
}
