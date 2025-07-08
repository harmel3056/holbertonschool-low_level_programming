#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width of grid, columns
* @height: height of grid, rows
*
* Description: returns a pointer to a 2 dimensional array of integers
* Return: 2D array of ints
*/

int **alloc_grid(int width, int height)
{
	int r, c;
	int **grid;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = malloc((height) * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		grid[r] = malloc(width * sizeof(int));
		if (grid[r] == NULL)
		{
			while (r--)
				free(grid[r]);
			free(grid);
			return (NULL);
		}

		for (c = 0; c < width; c++)
		grid[r][c] = 0;
	}

	return (grid);
}
