#include <stdlib.h>

/**
 * array_range - function that creates an array of ints
 * @min: minimum value
 * @max: maximum value
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
