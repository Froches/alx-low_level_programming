#include "main.h"
#include <unistd.h>

/**
 * main - prints putchar and new line
 *
 * Return: always 0
 */

int putchar(char c)
{
	return (write(1, &c, 1));
 	_putchar('_');
 	_putchar('p');
 	_putchar('u');
 	_putchar('t');
 	_putchar('c');
 	_putchar('h');
 	_putchar('a');
 	_putchar('r');
 	_putchar('\n');

	return (0);
}
