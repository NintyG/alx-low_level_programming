#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that free new dimensional grid
 * @grid: its grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
