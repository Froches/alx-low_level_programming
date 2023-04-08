#include <stdio.h>

/**
 * main - program that prints all numbers of base 16 in lowercase with new line
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		char hexa = (i < 10) ? (i + '0') : (i - 10 + 'a');

		putchar(hexa);
		i++;
	}
	putchar('\n');
	return (0);
}
