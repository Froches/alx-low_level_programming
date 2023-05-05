#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;

	for (i = 63; i >= 0; i--)
	{
	if ((n >> i) & 1)
	{
		_putchar('1');
		flag = 1;
	}
	else if (flag)
		_putchar('0');
	}

	if (!flag)
		_putchar('0');
}
