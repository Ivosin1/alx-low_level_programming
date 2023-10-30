#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 Dimentional grid previously.
 * created by your malloc_grid function.
 * @grid: Memory block to be freed.
 * @height: Height of the grid.
 * Return: Returns nothing.
 */

void free_grid(int **grid, int height)
{
	int k = 0;

	if (grid == NULL)
		return;
	while (k < height)
		free((int *)grid[k++]);
	free(grid);
}
