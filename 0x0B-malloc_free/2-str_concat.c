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
	size_t len;

	if (s1 == NULL)
	{
		return (NULL);
	}

	cat = strcat(s1, s2);

	len = strlen(cat);

	cats = (char *)malloc(sizeof(char) * (len + 1));

	if (cat == NULL)
	{
		return (NULL);
	}

	return (cats);
}
