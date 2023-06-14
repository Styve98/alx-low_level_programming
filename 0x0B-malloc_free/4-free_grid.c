#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - it free's 2d array.
 * @grid: 2d grid
 * @height: dimension height of a grid.
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
