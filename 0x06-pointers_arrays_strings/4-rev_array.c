#include "main.h"

/**
 * reverse_array - Reverses thecontent of array of integers
 * @a: the array to reverse
 * @n: the umber of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
