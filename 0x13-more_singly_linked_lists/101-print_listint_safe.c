#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers (with loop detection)
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *loop_start = NULL;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *) current, current->n);
		current = current->next;

		if (current == loop_start)
		{
			printf("-> [%p] %d\n", (void *) current, current->n);
			break;
		}

		if (count == 1)
			loop_start = head;

		while (loop_start != current)
		{
			if (loop_start == current->next)
			{
				printf("-> [%p] %d\n", (void *) current->next, current->next->n);
				return (count);
			}
			loop_start = loop_start->next;
		}
	}

	return (count);
}
