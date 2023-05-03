#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @num: number to use
 * Return: value of last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar('0' + last_digit);
	return (last_digit);
}
