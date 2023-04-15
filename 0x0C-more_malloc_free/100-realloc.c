#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer
 * @old_size: old size of allocated space
 * @new_size: new size of space
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	char *src = ptr;
	char *dest = new_ptr;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		dest[i] = src[i];

	free(ptr);

	return (new_ptr);
}
