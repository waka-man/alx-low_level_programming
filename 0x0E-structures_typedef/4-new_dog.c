#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - instantiates a new dog object of type dog_t
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: new_dog of type dog_t, NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	unsigned int index;

	my_dog = malloc(sizeof(dog_t));
	if (name == NULL )
		return (NULL);

	my_dog->name = malloc(sizeof(name) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(owner) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->age = age;

	for (index = 0; name[index]; index++)
	{
		my_dog->name[index] = name[index];
	}
	my_dog->name[index] = '\0';

	for (index = 0; owner[index]; index++)
	{
		my_dog->owner[index] = owner[index];
	}
	my_dog->name[index] = '\0';

	return (my_dog);
}
