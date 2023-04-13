#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: null
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int s1_len = 0, s2_len = 0, i = 0, j = 0;

	while (s1 && s1[s1_len])
		s1_len++;

	while (s2 && s2[s2_len])
		s2_len++;

	result = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (!result)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];

	for (j = 0; j < s2_len; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';
	return (result);
}
