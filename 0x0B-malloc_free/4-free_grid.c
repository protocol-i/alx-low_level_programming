#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free 2 dimensional array
 * @grid: 2 dimensional grid
 * @height: height of the grid dimension
 * Description: frees memory of the grid
 * Return: nothin
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k];
				}
				free(grid);
				}

