#include "main.h"

/**
 * _atoi - function that converts a string to an int
 * @s: the string to be converted
 *
 * Return: The converted int value
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (sign * num);
}
