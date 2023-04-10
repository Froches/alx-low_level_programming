#include <stdio.h>

/**
 * main - Entry point
 * @argv: array
 * @argc: number
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}
	return (0);
}
