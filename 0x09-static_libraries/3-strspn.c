#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - function prototype
 * @s: parameter
 * @accept: parameter
 * Return: value
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
