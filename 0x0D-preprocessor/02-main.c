#include <stdio.h>
/**
 * main - prints the name of file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	printf("This program was compiled from the file %s\n", __FILE__);
	return (0);
}