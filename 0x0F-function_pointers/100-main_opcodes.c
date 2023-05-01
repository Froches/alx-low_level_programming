#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of a function
 * @ptr: pointer to the function to print opcodes for
 * @bytes: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(unsigned char *ptr, int bytes)
{
	int i;

	for (i = 0; i < bytes; i++)
		printf("%02x ", *(ptr + i));

	printf("\n");
}

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
	int bytes;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Usage: %s bytes\n", argv[0]);
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes <= 0)
	{
		printf("%s: Invalid number of bytes: %s\n", argv[0], argv[1]);
		return (2);
	}

	main_ptr = (unsigned char *)main;
	print_opcodes(main_ptr, bytes);

	return (0);
}
