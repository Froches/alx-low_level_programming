#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates array of characters
 * @size: size of integer
 * Return: pointer to array or null
 * @c: array of characters
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return NULL;
	}

	if (array == NULL)
	{
		return NULL;
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return array;
}
