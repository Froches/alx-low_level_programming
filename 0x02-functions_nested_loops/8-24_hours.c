#include "main.h"
/**
 * jack_bauer - print every minute in the day of Jack Bauer from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar('\n');
			j++;
		}
		i++;
	}
}
