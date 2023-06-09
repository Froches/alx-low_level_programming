#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a given function of an integer array
 * @array: pointer to int array
 * @size: size of the array
 * @action: pointer to the function you need to use
 *...
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
