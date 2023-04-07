#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints single digit numbers in base 10 with new line
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");

	return (0);
}
