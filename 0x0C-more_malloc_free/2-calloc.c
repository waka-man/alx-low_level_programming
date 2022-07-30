#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for for array of size nmemb
 * @nmemb: the number of members of the array
 * @size: the size of each of the members
 * Return: pointer to the allocated memory for the array
 * and NULL if either size or nmemb are 0 or malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array_location;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array_location = malloc(nmemb * size);
	if (array_location == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < (nmemb * size); index++)
	{
		array_location[index] = 0;
	}

	return (array_location);
}
