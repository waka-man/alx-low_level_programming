#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure resembling the animal dog
 * @name: variable to hold the dog's name
 * @age: variable to hold the dog's age
 * @owner: variable to hold the name of the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
