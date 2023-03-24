#include "main.h"

/**
 * print_most_numbers - a function that prints numbers except 2 and 4
 *
 * _putchar - to print answer
 *
 * Return: value
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}

