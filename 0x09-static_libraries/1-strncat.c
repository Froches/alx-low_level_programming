#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - function
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: value
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
