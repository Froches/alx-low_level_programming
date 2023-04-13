#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that returns a pointer to a string
 * @str: string to be worked on
 * Return: string
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
