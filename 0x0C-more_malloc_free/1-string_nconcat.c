#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string and destination string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	char *concat;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	concat = malloc((s1_len + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i++] = s2[j];

	concat[i] = '\0';

	return (concat);

}
