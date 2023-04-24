#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 * Return: void
 */

void puts2(char *str)
{
	int longi = 0;
	char *y = str;
	int o;
	int t = 0;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;

	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}
