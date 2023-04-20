#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the function to be used to compare values
 *
 * Return: the index of first element for which cmp function does not r,
 *         -1 if no element match or size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
