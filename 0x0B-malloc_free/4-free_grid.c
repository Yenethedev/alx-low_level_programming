#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid previously created
 * @grid: 2D grid
 * @height: Height dimension of grid
 * Description: Frees memory of grid
 * Return: Nothing
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
