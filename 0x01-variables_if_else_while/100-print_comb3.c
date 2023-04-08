#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 (success)
 */
int main(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		for (k = j + 1; k < 10; ++k)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
