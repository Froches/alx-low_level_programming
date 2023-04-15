#include <stdio.h>

/**
 * print_last_digit - function that prints the last digit of a number
 * @num: parameter to be worked on
 * Return: value of last digit.
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;
	int digit_char = last_digit + '0';

	putchar('T');
	putchar('h');
	putchar('e');
	putchar(' ');
	putchar('l');
	putchar('a');
	putchar('s');
	putchar('t');
	putchar(' ');
	putchar('d');
	putchar('i');
	putchar('g');
	putchar('i');
	putchar('t');
	putchar(' ');
	putchar('o');
	putchar('f');
	putchar(' ');
	putchar(num + '0');
	putchar(' ');
	putchar('i');
	putchar('s');
	putchar(' ');
	putchar(digit_char);
	putchar('\n');
	return (last_digit);
}
