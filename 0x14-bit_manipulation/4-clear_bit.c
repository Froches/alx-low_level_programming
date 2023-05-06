#include <stdio.h>
#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at an index
 * @n: number
 * @index: index starting from 0 of chosen bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
