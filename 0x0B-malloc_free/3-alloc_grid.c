#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make a grid
 * @width: width input
 * @height: height input
 * Return: pointer into 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **di;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	di = malloc(size(int *) * height);

	if (di == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		di[i] = malloc(sizeof(int) * width);

		if (di[i] == NULL)
		{
			for (; i >= 0; i++)
				free(di[i]);
			free(di);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			di[i][k] = 0;
	}
	return (di);
}
