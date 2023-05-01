#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 if successful, 1 if incorrect number of arguments, 2 if negative
 *         number of bytes
 */
int main(int argc, char **argv)
{
	int bytes, i;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (unsigned char *)main;
	for (i = 0; i < bytes; i++)
		printf("%02x ", *(main_ptr + i));

	printf("\n");
	return (0);
}
