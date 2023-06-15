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
	size_t len1, len2, totallen;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	totallen = len1 + len2;

	cat = (char *)malloc(sizeof(char) * (totallen + 1));

	if (cat == NULL)
	{
		return (NULL);
	}

	memcpy(cat, s1, len1);
	memcpy(cat + len1, s2, len2);
	cat[totallen] = '\0';


	return (cat);
}
