#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  some  craziness about a douple pointer god help me
 * @width: width
 * @height: height
 *
 * Return: NULL or pointer
 */

int **alloc_grid(int width, int height)
{
	int i, k, j;
	int **grid;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/*for (j = 0; j < i; j++)
			       free(grid[j]);

			free(grid);*/
			return (NULL);
		}
		for (k = 0; k < width; k++)
			grid[i][k] = 0;
	}

	return (grid);
}
