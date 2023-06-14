#include "main.h"

/**
 * create_array - create an array of char and initialze with specified char.
 * @size: size of the array
 * @c: specific character
 * Return: pointer to the array on success and NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

