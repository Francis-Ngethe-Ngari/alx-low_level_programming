#include "main.h"

/**
 * free_grid - Function to free 2-dimention grid of
 * integers created.
 *
 * @grid: represents 2D grid.
 * @height: represents the number of rows in the grid.
 *
 * defination: the free_grid function ensures memory leaks
 * are prevented as all allocated memory is properly released.
 *
 * Return: nothing.
 *
 */

void free_grid(int **grid, int height)
{
	int itr;

	for (itr = 0; itr < height; itr++)
		free(grid[itr]);
	free(grid);
}
