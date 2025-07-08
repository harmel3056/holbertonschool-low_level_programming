#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - releases allocated memory to freedom
* @grid: pointer to pointers, good lord
* @height: rows
*
* Description: releases allocated memory from its guilded cage
* Return: void
*/

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
		free(grid);
	}
}
