#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable type
 * @d: struct dog variable
 * @name: name of dog
 * @age: dog's age
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
