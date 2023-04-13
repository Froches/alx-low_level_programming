#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: null
 */
char *str_concat(char *s1, char *s2)
{
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	char *result = malloc(s1_len + s2_len + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
