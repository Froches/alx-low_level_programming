#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
		mask >>= 1;
	}
}

