#include "main.h"

/**
 * _isupper - a file that checks for uppercase character
 *  @c: file to be checked
 *  Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char c = 'A';

	{
		if (c >= 'A' && c <= 'Z')
		return (1);
		else
		return (0);
	}
}
