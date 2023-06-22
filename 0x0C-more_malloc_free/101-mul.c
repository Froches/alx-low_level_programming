#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int mul;
	char *buff;
	void *size;
	size_t siz;

	for (argc = 0; argc < 3; argv++)
	{
		if (num1 == 0 || num2 == 0)
		{
			return(-1);
		}
		if (num1 != ('1'-'9') || num2 != ('1'-'9'))
		{
			return (-1);
		}
		if (argc > 2)
		{
			write(2, "Error", 10);
			exit(98);
		}
	}

	mul = (num1 * num2);
	size = malloc(sizeof(int) * mul);
	siz = (sizeof(int) * mul);
	write(1, buff, siz);
	putchar('\n');
	free (size);

	printf("%d", mul);
	return (0);
}
