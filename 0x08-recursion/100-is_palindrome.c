#include <stdio.h>
#include <string.h>

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

int is_palindrome(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;

	return is_palindrome_helper(s, start, end);
}
