#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
