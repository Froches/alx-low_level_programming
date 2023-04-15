#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - function prototype
 * @dest: parameter
 * @src: source
 * @n: parameter
 * Return: value
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
