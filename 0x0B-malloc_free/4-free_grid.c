#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the memory location allocated by the alloc_grid
 * function on the previous problem
 * @grid: a pointer to the two dimentional array
 * @height: the column size of the 2d array
 * Return: nothing is returned by this funtion
 */

void free_grid(int **grid, int height)
{
	int index = 0;

	if (grid != NULL || height != 0)
	{

		while (index <= height)
		{
			free(grid[index]);
			index++;
		}
		free(grid);
	}
}
