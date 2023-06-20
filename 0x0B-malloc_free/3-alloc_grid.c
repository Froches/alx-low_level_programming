#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-D array of ints
 * @width: width of 2-D array
 * @height: height of 2-D array
 *
 * Return: pointer to a 2-D array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
