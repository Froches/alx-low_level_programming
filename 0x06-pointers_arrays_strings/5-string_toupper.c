#include "main.h"

/**
 * string_toupper - changes lowercase in a string to uppercase
 * @str: The string to be changec
 * Return: A pointer to changes loops
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
