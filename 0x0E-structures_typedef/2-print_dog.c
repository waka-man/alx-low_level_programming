#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - A function that prints an initialized dog struct
 * @d: pointer of type struct dog
 * Return: no value is returned by this function
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		d->name = "(nil)";
	if ((*d).age <= 0)
		printf("Age: (nil)\n");
	if ((*d).owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
