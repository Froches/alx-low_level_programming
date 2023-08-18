#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char p_word[7], *codex;
	int len = strlen(argv[1]), g, tmp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	p_word[0] = codex[tmp];

	tmp = 0;
	for (g = 0; g < len; g++)
		tmp += argv[1][g];
	p_word[1] = codex[(tmp ^ 79) & 63];

	tmp = 1;
	for (g = 0; g < len; g++)
		tmp *= argv[1][g];
	p_word[2] = codex[(tmp ^ 85) & 63];

	tmp = 0;
	for (g = 0; g < len; g++)
	{
		if (argv[1][g] > tmp)
			tmp = argv[1][g];
	}
	srand(tmp ^ 14);
	p_word[3] = codex[rand() & 63];

	tmp = 0;
	for (g = 0; g < len; g++)
		tmp += (argv[1][g] * argv[1][g]);
	p_word[4] = codex[(tmp ^ 239) & 63];

	for (g = 0; g < argv[1][0]; g++)
		tmp = rand();
	p_word[5] = codex[(tmp ^ 229) & 63];

	p_word[6] = '\0';
	printf("%s", p_word);
	return (0);
}
