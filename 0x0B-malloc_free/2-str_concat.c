#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to s1 on success and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	char *cats;
	size_t len1, len2, totallen;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	totallen = len1 + len2;

	cats = (char *)malloc(sizeof(char) * (totallen + 1));

	if (cats == NULL)
	{
		return (NULL);
	}

	cat = cats;

	while (*s1 != '\0')
	{
		*cat = *s1;
		cat++;
		s1++;
	}

	while (*s2 != '\0')
	{
		*cat = *s2;
		cat++;
		s2++;
	}

	*cat = '\0';

	return (cats);
}
