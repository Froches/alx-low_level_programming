#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: The arguments passed to the program
 *
 * Return: 0 on success, other values on failure
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, num_bytes;
    char buffer[BUFFER_SIZE];


    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return 97;
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return 98;
    }

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        return 99;
    }

    while ((num_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
    {
        if (write(file_to, buffer, num_bytes) != num_bytes)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(file_from);
            close(file_to);
            return 99;
        }
    }

    if (num_bytes == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(file_from);
        close(file_to);
        return 98;
    }

    if (close(file_from) == -1 || close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from == -1 ? file_to : file_from);
        return 100;
    }

    return 0;
}
