#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function to initialize a dog object of type struct dog
 * @d: pointer of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: no value is returned by this function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		{
			return;
		}
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
