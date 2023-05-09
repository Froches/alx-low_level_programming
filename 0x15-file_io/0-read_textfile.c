#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: the name of the file
 * @letters: no. of letters to be read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, r;
	char *ptBuff = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	r = read(fd, ptBuff, letters);
	w = write(STDOUT_FILENO, ptBuff, r);
	if ((w != r) || (fd == -1) || (r < 0))
		return (0);
	free(ptBuff);
	close(fd);
	return (w);
}
