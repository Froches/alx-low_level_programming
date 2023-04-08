#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int p, q, j, k;

	for (p = 0; p <= 9; p++)
	{
		for (q = 0; q <= 9; q++)
		{
			for (j = p; j <= 9; j++)
			{
				for (k = (j == p ? q + 1 : 0); k <= 9; k++)
				{
					putchar(p + '0');
					putchar(q + '0');
					putchar(' ');
					putchar(j + '0');
					putchar(k + '0');

					if (p != 9 || q != 8 || j != 9 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
