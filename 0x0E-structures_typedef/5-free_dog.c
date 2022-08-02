#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees memory location allocated for
 * struct dog and derivatives
 * @d:pointer to dog struct
 * Return: No value is returned by this function
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
