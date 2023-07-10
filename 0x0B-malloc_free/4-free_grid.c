#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a dimensional grid
 * @grid: input value
 * @height: input value
 * Return:  0 (success)
*/
void free_grid(int **grid, int height)
{
	int m;

	m = 0;
	while (m < height)
	{
		free(grid[m]);
	}
	free(grid);
}
