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
	int i = 0, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (!arr[i])
		{
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
