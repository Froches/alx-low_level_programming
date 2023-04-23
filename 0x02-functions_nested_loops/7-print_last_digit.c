#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: parameter to be worked on
 * Return: value of last digit.
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
		n = -n;
	b = n % 10;

	if (b < 0)
		b = -b;
	putchar(b + '0');
	return (b);
}
