#include "main.h"

/**
 * free_grid - frees second array
 * @grid: 2nd grid
 * @height: height dimension of grid
 * description: frees memory of grid
 * Return: nothing
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
