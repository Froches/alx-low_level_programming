#include "main.h"

/**
 * print_alphabet - prints letters of alphabet in lower case with new line
 * Return: 0 always
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);
	_putchar('\n');
}
