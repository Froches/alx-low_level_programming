#include "main.h"
#include <unistd.h>

/**
 * main - a program that prints putchar
 *
 * Return: 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
