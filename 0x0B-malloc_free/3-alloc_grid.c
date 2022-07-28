#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocates memory for a two dimentional array
 * of size height and width supplied as params and initializes it with 0s
 * @height: the column size of the 2d array
 * @width: the row size of the 2d array
 * Return: Pointer to the 2d array, NULL if not successful
 */

int **alloc_grid(int width, int height)
{
	int index;
	int jndex;
	int **tood_array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tood_array = malloc(sizeof(int) * height);

	if (tood_array == NULL)
	{
		free(tood_array);
		return (NULL);
	}

	for (index = 0; index < height; index++)
	{
		tood_array[index] = malloc(sizeof(int) * width);

		if (tood_array == NULL)
		{
			free(tood_array);
			return (NULL);
		}

		for (jndex = 0; jndex < width; jndex++)
		{
			tood_array[index][jndex] = 0;
		}
	}

	return (tood_array);
}
