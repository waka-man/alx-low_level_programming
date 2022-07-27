#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - initializes array of chars based on size and
 * initial char provided
 * @size: Parameter passed to the function to the funtion to determine its
 * size
 * @c: character provided to initialize the array
 * Return: Pointer to the first element of the array, which is c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int index = 0;
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}

	while (index < size)
	{
		array[index] = c;
		index++;
	}
	return (array);
}
