#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 * Return: 0 if successful, 1 if incorrect number of arguments, 2 if negative
 */
int main(int argc, char **argv)
{
	int bytes, i, printed_chars = 0;
	unsigned char *main_ptr;
	char expected_output[1024] = "";
	char actual_output[1024] = "";

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
	{
		printf("%02x ", *(main_ptr + i));
		printed_chars += 3;
	}
	printf("\n");
	if (printed_chars != bytes * 3)
	{
		printf("Unexpected output format\n");
		return (3);
	}
	snprintf(expected_output, sizeof(expected_output), "%02x ", *(main_ptr));
	for (i = 1; i < bytes; i++)
		snprintf(expected_output, sizeof(expected_output),
				"%s%02x ", expected_output, *(main_ptr + i));
	snprintf(expected_output, sizeof(expected_output), "%s\n", expected_output);
	rewind(stdout);
	fgets(actual_output, sizeof(actual_output), stdout);
	if (strcmp(actual_output, expected_output) != 0)
	{
		printf("Unexpected output\n");
		printf("Expected: %s", expected_output);
		printf("Got: %s", actual_output);
		return (4);
	}
	return (0);
}
