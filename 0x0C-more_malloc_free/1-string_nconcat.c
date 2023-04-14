#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string to work on
 * @s2: string two
 * @n: number of bytes
 *
 * Return: NULL if it fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *result = malloc(s1_len + n + 1);
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}
