#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers using range min to max
 * @min: the lower bound member of the array
 * @max: the upper bound member of the array
 * Return: Pointer to the newly created array, NULL if min > max
 * or malloc fails
 */

int *array_range(int min, int max)
{
	int *new_array;
	int index;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	for (size = 0; size < (max - min); size++)
	{
	}

	new_array = malloc(sizeof(int) * (size + 1));
	if (new_array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index <= size; index++)
	{
		new_array[index] = min++;
	}

	return (new_array);
}
