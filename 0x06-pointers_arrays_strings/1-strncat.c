#include "main.h"

/**
 * _strncat - Concatenates two strings using n bytes from src
 * @dest: The string to be appended
 * @src: The string to be joined to dest
 * @n: The number of bytes to be used
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
