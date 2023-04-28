#include "main.h"
/**
 * leet - encode into 1337speak
 * @str: string
 * Return: n value
 */
char *leet(char *str)
{
	int i, j;
	char leet[5] = {'4', '3', '0', '7', '1'};
	char letters[5][2] = {
		{'a', 'A'},
		{'e', 'E'},
		{'o', 'O'},
		{'t', 'T'},
		{'l', 'L'}
	};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j][0] || str[i] == letters[j][1])
			{
				str[i] = leet[j];
				break;
			}
		}
	}

	return (str);
}
