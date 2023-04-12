#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - function that returns a pointer to a string
 * @str: string to work on
 * Return: pointer to a string
 */

char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *copy = (char *) malloc(len + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (copy == NULL)
	{
		return (NULL);
	}
	memcpy(copy, str, len);
	copy[len] = '\0';
	return (copy);
}

