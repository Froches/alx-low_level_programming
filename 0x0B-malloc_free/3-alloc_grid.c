#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2-D array of ints
 * @width: width of 2-D array
 * @height: height of 2-D array
 *
 * Return: pointer to a 2-D array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
		return (NULL);
	for (x = 0; x < height; x++)

	{
		mee[x] = malloc(sizeof(int) * width);
		if (mee[x] == NULL)
	{
		for (; x >= 0; x--)
		free(mee[x]);

		free(mee);
		return (NULL);
	}

	}
		for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		mee[x][y] = 0;
	}
	return (mee);
}
