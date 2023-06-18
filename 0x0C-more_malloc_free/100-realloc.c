#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates memory using malloc and free
 * @old_size: old size of ptr
 * @new_size: new size of ptr
 * @ptr: pointer to string
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);

	free(ptr);

	return (new_ptr);
}
