#include "main.h"
/**
 * free_grid - function frees 2D grid allocated memory
 * @grid: pointer of the grid
 * @height: height of grid
 * Return: return free grid
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
