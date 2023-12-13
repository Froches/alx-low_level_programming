#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t chosen_val = (step < size ? step : size);

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (array[chosen_val - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			return (-1);
		}
	}
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == chosen_val)
		{
			return (-1);
		}
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
	{
		return (prev);
	}
	return (-1);
}
