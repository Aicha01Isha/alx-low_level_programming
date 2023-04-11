#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees 2d array
 *
 * @grid: parameter
 *
 * @height: parameter
 *
 * Return: 0 on success
 */

void free_grid(int **grid, int height)
{
	int n;
	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
