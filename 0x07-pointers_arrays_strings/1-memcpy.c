#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @n: Number of bytes to be copied.
 * @src: Memory area to be copied from.
 * @dest: Destination memory area.
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 00; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
