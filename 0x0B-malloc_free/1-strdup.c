#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @ str: string given as parameter
 *
 * Return: pointer to the duplicated string or NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);

	return (dup);
}
