#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to a file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, o, w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	i = 0;
	while (text_content[i])
	{
		i++;
	}
	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	w = write(o, text_content, i);
	if (o < 0 || w < 0)
		return (-1);
	close(o);
	return (1);
}
