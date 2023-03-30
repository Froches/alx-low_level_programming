#include "main.h"

/**
 * _strncpy - copies an inputted number of bytes
 * @dest: The buffer storing the string to be copied
 * @src: The source string
 * @n: The maximum no. bytes to be copied
 *
 * Return: A pointer to resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = '\0';

	return (dest);
}
