#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte.
 * @n: Memory area to be filled.
 * @s: Pointer to memory area.
 * @b: Constant byte.
 *
 * Return: A pointer to the memory area, s which will point to a pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
