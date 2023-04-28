#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */
size_t print_list(const list_t *h)
{
	char len_buf[32];
	size_t count = 0;

	while (h != NULL)
	{
		int len_size = sprintf(len_buf, "%u", h->len);
		const char *str = h->str != NULL ? h->str : "(nil)";

		if (write(STDOUT_FILENO, "[", 1) == -1)
			exit(EXIT_FAILURE);
		if (write(STDOUT_FILENO, len_buf, len_size) == -1)
			exit(EXIT_FAILURE);
		if (write(STDOUT_FILENO, "] ", 2) == -1)
			exit(EXIT_FAILURE);
		if (str == NULL)
		{
			str = "(nil)";
		}
		if (write(STDOUT_FILENO, str, h->len) == -1)
			exit(EXIT_FAILURE);
		if (write(STDOUT_FILENO, "\n", 1) == -1)
			exit(EXIT_FAILURE);

		count++;
		h = h->next;
	}

	return (count);
}
