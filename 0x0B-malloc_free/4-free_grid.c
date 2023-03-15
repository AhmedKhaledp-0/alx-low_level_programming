#include "main.h"

/**
 * free_grid -tion that frees a 2 dimensional grid
 * @grid: int
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

