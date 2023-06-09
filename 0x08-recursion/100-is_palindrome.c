#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_helper - function that checks for palindrome
 * @s: string
 * @start: parameter
 * @end: parameter
 * Return: recursive call to the function
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - function that checks for palindrome
 * @s: string
 * Return: recursive call to the function
 */

int is_palindrome(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;

	return (is_palindrome_helper(s, start, end));
}
