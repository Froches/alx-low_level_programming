#include <stdio.h>

/**
 * _strlen - program that returns the length of a string
 * @str: The string we are working with
 * Return: The length of a string str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
