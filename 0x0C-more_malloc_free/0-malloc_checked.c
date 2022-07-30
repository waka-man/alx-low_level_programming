#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the size in bytes specification for the location to be allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allocated_mem;

	allocated_mem = malloc(b);

	if (allocated_mem == NULL)
	{
		exit(98);
	}
	return (allocated_mem);
}
