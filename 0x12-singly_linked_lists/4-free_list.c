#include <stdio.h>
#include "lists.h"

/**
 * free_list - free memory space
 *
 * @head: new node
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		printf("[%d] %s\n", tmp->len, tmp->str);
		free(tmp->str);
		free(tmp);
	}
}
