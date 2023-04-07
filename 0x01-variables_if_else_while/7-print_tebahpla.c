#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char mir;

	for (mir = 'z'; mir >= 'a'; --mir)
		putchar(mir);
	putchar('\n');

	return (0);
}
