#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * struct dog: struct dog
 * @d: pointer to struct dog to initialize
 * @name: pointer to name to initialize
 * @age: age to initialize
 * @owner: pointer to owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)

{
	char *name;
	float age;
	char *owner;
};
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}

