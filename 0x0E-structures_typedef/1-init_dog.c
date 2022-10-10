#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable struct dog.
 * @d: struct to initialize
 * @name: Name of Dog
 * @age: Age of Dog
 * @owner: Dog's owner
 * Return: Nil
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
