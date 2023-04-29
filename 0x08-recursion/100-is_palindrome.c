#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		while (!isalnum(s[i]) && i < j)
			i++;
		while (!isalnum(s[j]) && i < j)
			j--;
		if (tolower(s[i]) != tolower(s[j]))
			return (0);
	}

	return (1);
}
