#include "main.h"

/**
 * free_grid - free memory previosly allocazed
 * @grid: piontter to array
 * @height: number of rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
