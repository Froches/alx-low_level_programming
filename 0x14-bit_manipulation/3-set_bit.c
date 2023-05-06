#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: number to check
 * @index: index starting from 0 of bit you want to set
 *
 * Return: 1 if successful or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;
	*n |= mask;

	return (1);
}
