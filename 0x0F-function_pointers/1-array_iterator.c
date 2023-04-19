#include <stdlib.h>
/**
 * array_iterator - function that executes function given as parameter
 * @array: array to be worked on
 * @size: size of array to be worked on
 * @action: pointer to function we need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
