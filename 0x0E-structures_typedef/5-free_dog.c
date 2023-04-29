#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to the dog to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
