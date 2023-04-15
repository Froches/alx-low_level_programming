#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - function prototype
 * @haystack: parameter
 * @needle: parameter
 * Return: value
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
