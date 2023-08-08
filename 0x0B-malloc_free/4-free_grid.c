#include "main.h"
#include <stdlib.h>
/**
 *free_grid - The function frees a 2 dimensional grid
 *previously created alloc_grid function
 *
 *@grid: Grid to be freed
 *@height: This is the height of the grid
 *
 *
 *
 */
void free_grid(int **grid, int height)
{
	 int n = 0;

	if (grid == NULL || height == 0)
		return;

	while (n < height)
	{
		free(grid[n]);
		n++;
	}

	free(grid);
}

