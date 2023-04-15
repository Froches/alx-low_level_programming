#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments passed
 * @argv: The array of arguments passed
 *
 * Return: 0 if successful, 98 if error occurs
 */
int main(int argc, char *argv[])
{
	int len1, len2, i, j, mul, carry, *result;if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	len1 = 0;
	while (argv[1][len1])
	{
		if (argv[1][len1] < '0' || argv[1][len1] > '9')
	{
	printf("Error\n");
	return (98);
	}
	len1++;
	}

	len2 = 0;
	while (argv[2][len2])
	{
		if (argv[2][len2] < '0' || argv[2][len2] > '9')
		{
			printf("Error\n");
			return (98);
		}
		len2++;
	}
	
	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (argv[1][i] - '0') * (argv[2][j] - '0') + carry + result[i + j + 1];
			carry = mul / 10;
			result[i + j + 1] = mul % 10;
		}
		result[i + j + 1] = carry;
	}
	
	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;

	for (; i < len1 + len2; i++)
		_putchar(result[i] + '0');
	_putchar('\n');

	free(result);

	return (0);
}
