#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - function prototype
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 * Return: memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
