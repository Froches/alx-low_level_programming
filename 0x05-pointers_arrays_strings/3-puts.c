#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: the string to be printed
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
